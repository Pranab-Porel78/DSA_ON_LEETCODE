class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count =0;
        int maxx=0;
        for(int num:arr){
            if(num % 2 == 1){
                count++;
                if(count>maxx){
                    maxx=count;
                }
            }
            else{
                count=0;
            }
        }
        if(maxx>=3){
            return true;
        }
        return false;
        
    }
};