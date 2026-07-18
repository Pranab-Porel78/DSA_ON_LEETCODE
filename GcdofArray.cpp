class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low =nums[0];
        int high = nums[nums.size() - 1];
        if (nums.size() >= 2) {
            while (high != 0) {
                int temp = high;
                high = low % high;
                low = temp;
            }
        }
        return low;
    }
};