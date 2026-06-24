class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        int maxi=-1;
        for(auto it:freq){
            if(it.first==it.second){
                maxi=max(maxi,it.first);
            }
        }
        return maxi;
        
    }
};