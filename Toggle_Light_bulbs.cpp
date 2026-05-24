class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int ,int >freq;
        for(int i=0;i<bulbs.size();i++){
            freq[bulbs[i]]++;
        }
        vector <int> res;
        for(auto it: freq){
            if(it.second%2==1){
                res.push_back(it.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};