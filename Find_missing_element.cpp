class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n =nums.size();
       vector<int>arr;
       for(int i=0;i<n-1;i++){
         for(int x=nums[i]+1;x<nums[i+1];x++){
            arr.push_back(x);
         }
       }
       return arr;
    }
};