class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> freq(10, 0);

        while (n > 0) {
            freq[n % 10]++;
            n /= 10;
        }

        int minFreq = INT_MAX;
        int ans = 9;

        for (int d = 0; d <= 9; d++) {
            if (freq[d] > 0) {
                if (freq[d] < minFreq) {
                    minFreq = freq[d];
                    ans = d;
                }
            }
        }

        return ans;
        
      
        
    }
};