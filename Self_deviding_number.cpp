class Solution {
public:
    vector<int> selfDividingNumbers(int left ,int right) {
        vector<int> arr;
        for(int i=left;i<=right;i++)
        {
           int n =i;
           while(n>0)
           {
             int m= n%10;
             if(m!=0){
                if(i%m ==0)
                {
                    n=n/10;
                }else{
                    break;
                }
             }else{
                break;
             }
           }
           if(n==0){
             arr.push_back(i);
           }
           
        }
        return arr;
    }
};