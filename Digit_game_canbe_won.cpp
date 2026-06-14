class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int p1=0,p2=0;
        for(int num:nums){
            if(num<10){
                p1 += num;
            }
            else{
                p2 += num;
            }
        }
        return p1 != p2;
        
    }
};