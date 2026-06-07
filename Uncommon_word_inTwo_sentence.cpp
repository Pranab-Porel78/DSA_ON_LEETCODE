class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> freq;

        stringstream ss1(s1), ss2(s2);
        string word;

        while (ss1 >> word) {
            freq[word]++;
        }

        while (ss2 >> word) {
            freq[word]++;
        }

        vector<string> res;

        for (auto it : freq) {
            if (it.second == 1) {
                res.push_back(it.first);
            }
        }

        return res;
    }
};