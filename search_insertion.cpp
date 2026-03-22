class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int index;
        for(int i=0;i<n;i++){
            if(nums[i]==target)
            {
               return i;
            }
        }
        return lower_bound(nums.begin(), nums.end(), target) -nums.begin();
        
    }
};