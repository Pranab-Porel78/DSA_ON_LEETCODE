class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int sum=0;
            while(num>0){
                sum += num%10;
                num/=10;
            }
            ans.push_back(sum);
        }

        sort(ans.begin(),ans.end());

        return ans[0];
        
    }
};