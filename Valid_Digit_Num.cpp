class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int>arr;
        while(n>0){
            arr.push_back(n%10);
            n/=10;
        }
        reverse(arr.begin(),arr.end());
        int i=0;
        while(i<arr.size()){
            if(arr[0]==x) return false;
            if(arr[i]==x){
                return true;
            }
            i++;
        }
        return false;
        
    }
};