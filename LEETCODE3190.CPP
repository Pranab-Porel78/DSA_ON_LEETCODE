class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int steps=0;
        for(int num:nums){
            if(num%3 !=0){
                steps++;
            }
        }
        
        return steps;
        
    }
};