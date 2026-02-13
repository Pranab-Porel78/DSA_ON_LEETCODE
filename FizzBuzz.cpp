class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> list;
        bool is3, is5;
        for(int i=1;i<=n;i++)
        {
            is3= i%3 ==0;
            is5= i%5 ==0;
            if(is3 && is5)
            {
                list.push_back("FizzBuzz");
            }
            else if(is3)
            {
                list.push_back("Fizz");
            }
            else if(is5)
            {
                list.push_back("Buzz");
            }
            else
            {
                list.push_back(to_string(i));
            }
            
        }
        return list; 
    }
};