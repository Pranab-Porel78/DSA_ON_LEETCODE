class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int digitsum=0;
        for(int num: nums){
            sum1 +=num;

            int temp =num;
            while(temp>0){
                digitsum+=temp%10;
                temp/=10;
            }
        }
        return abs(sum1-digitsum);
        
    }
};