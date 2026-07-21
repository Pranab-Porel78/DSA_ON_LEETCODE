class Solution {
public:
    bool isThree(int n){
        if (n == 1)
            return false;
        if (floor(sqrt(n)) != ceil(sqrt(n)))
            return false;
        for (int i = 2; i < sqrt(n); i++){
            if (n % i == 0)
                return false;
        }
        return true;
    }
};