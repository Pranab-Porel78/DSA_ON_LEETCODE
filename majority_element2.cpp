class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int ,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int>res;
        int n =nums.size();
        for(auto it : freq){
            if(it.second > (n/3)){
                res.push_back(it.first);
            }
        }
        return res;
        
    }
};