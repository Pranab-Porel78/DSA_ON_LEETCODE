class Solution {
public:
    int smallestNumber(int n, int t) {  
        while(true){
            int k = n;
            int temp = 1;
            while(k>0){
              int digit= k%10;
              temp *=digit;
              k=k/10;
            }
            if(temp%t==0){
              return n;
            }
            n++;
        }
    }
};