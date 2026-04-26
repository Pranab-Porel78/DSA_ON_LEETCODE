class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int ,int> freq;
        if(nums.size()==1){
            return{nums[0]};
        } 
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> arr;

        // Store as {frequency, number}
        for(auto it : freq) {
            arr.push_back({it.second, it.first});
        }

        // Sort descending by frequency
        sort(arr.rbegin(), arr.rend());

        vector<int> ans;

        // Take top k elements
        for(int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
          
    }
};