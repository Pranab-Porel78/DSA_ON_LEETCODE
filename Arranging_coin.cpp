class Solution {
public:
    int arrangeCoins(int n) {
        long long sum =0;
        int i=1;
        while(i<=n){
            sum += i;
            if(sum > n){
                break;
            }
            i++;
        }
        
        return i-1;
        
    }
};