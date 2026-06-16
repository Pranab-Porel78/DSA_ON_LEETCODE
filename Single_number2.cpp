class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>freq;
        for( int num:nums){
            freq[num]++;
        }
        int res;
        for(auto it: freq){
            if(it.second==1){
                res= it.first;
            }
        }
        return res;
        
    }
};