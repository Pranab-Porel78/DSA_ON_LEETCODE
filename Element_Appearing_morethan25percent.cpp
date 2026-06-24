class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int ,int>freq;
        for(int num:arr){
            freq[num]++;
        } 
        int res=0;
        int n=arr.size();       
        int x = n * 25/100;
        for(auto it :freq){
            if(it.second>x){
                res= it.first;
            }
        }
        return res;
    }
};