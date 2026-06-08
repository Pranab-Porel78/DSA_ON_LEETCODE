class Solution {
public:
    int countDigits(int num) {
        vector<int>arr;
        int x=num;
        while(num>0){
            arr.push_back(num%10);
            num/=10;
        }
        
        int count=0;
        int n =arr.size();
        reverse(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(x % arr[i]==0){
                count++;
            }
        }

        return count;
    }
};