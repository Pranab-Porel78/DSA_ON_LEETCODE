class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n =arr.size();
        unordered_map<int,int>freq;

        for(int num:arr){
            freq[num]++;
        }
        unordered_set<int> s;

        for(auto it:freq){
            if(s.find(it.second) != s.end()) {
               return false;
            }
            s.insert(it.second);

        }
        return true;
        
    }
};