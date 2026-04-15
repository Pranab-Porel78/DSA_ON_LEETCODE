class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev,digit;
        if(num<=0) return true;
        while(num>0){
            digit=num%10;
            rev=rev*10+digit;
            num=num/10;
            return rev;
        }
        if(num==rev){
            return true;
        }
        else return false;
        
    }
};