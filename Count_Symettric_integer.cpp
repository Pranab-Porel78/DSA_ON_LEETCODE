class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            string s = to_string(i);

            if (s.size() % 2 != 0)
                continue;

            int left = 0, right = 0;
            int n = s.size();

            for (int j = 0; j < n / 2; j++) {
                left += s[j] - '0';
                right += s[j + n / 2] - '0';
            }

            if (left == right)
                count++;
        }

        return count;
    }
};