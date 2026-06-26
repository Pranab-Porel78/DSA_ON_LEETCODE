class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int left = 0;
        long long current_sum = 0; 
        int max_freq = 0;
        
        for (int right = 0; right < nums.size(); ++right) {
            current_sum += nums[right];
            
            // If the budget 'k' is exceeded, shrink the window from the left
            while ((static_cast<long long>(nums[right]) * (right - left + 1)) - current_sum > k) {
                current_sum -= nums[left];
                left++;
            }
            
            max_freq = std::max(max_freq, right - left + 1);
        }
        
        return max_freq;

        
    }
};