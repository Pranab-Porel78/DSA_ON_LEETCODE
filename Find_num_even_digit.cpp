class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
                int p=nums[i];
                int count=0;
                while(p>0){
                    p=p/10;
                    count++;
                }
                if(count%2==0){
                  ans.push_back(nums[i]);
                }
                
        }
        return ans.size();
        
    }
};