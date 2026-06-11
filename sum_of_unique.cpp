class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int ,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int sum=0;
        for(auto it: freq){
            if(it.second == 1){
                sum=sum+it.first;
            }
        }
        return sum;
        
    }
};