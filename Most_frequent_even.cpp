class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int ,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int ans=-1;
        int maxfreq=0;

        for (auto it: freq){
            if(it.first % 2 ==0){
               if(it.second>maxfreq){
                 maxfreq=it.second;
                 ans=it.first;
               } 
               else if (it.second == maxfreq && it.first < ans) {
                    ans = it.first;
                }
            }
    
        }
        
        return ans;          
        
    }
};