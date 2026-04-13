class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        int maxfreq=0;
        int k;
        for(auto it :freq){
            if(it.second>maxfreq){
                maxfreq=it.second;
                k=it.first;
            }
        }
        return k;
        
    }
};