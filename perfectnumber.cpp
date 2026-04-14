class Solution {
public:
    bool checkPerfectNumber(int num) {
        int p=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                p=p+i;
            }
        }
        if(p==num){
            return true;
        }
        else{
            return false;
        }
        
    }
};