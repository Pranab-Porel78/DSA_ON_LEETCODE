class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourangle=0;
        double minuteangle=0;

        for(int i=0;i<hour;i++){
            hourangle += 30.0;
        }

        for(int i=0;i<minutes;i++){
            hourangle += 0.5;
        }

        for(int i=0;i<minutes;i++){
            minuteangle += 6.0;
        }
        double diff = abs(hourangle -minuteangle);
        return min( diff, 360.0-diff);


        
    }
};