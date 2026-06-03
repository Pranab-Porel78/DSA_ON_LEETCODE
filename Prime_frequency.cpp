class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for (auto it : freq) {
            int count = it.second;

            if (count <= 1)
                continue;

            bool isPrime = true;

            for (int i = 2; i < count; i++) {
                if (count % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                return true;
        }

        return false;
       

        
    }
};