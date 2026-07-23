class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int n = piles.size();
        int ans = 0;
        int left = 0;
        int right = n - 2;  // Second largest pile

        while (left < right) {
            ans += piles[right];
            left++;      // Bob takes the smallest
            right -= 2;  // Skip Alice's largest and move to next second largest
        }

        return ans;
    }
};