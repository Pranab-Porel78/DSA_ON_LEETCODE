class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        vector<int> p;
        sort(nums.begin(),nums.end(),greater<int>());
        if (n<2) return 0;
        for(int i=0;i<n-1;i++){
            int d= nums[i] - nums[i+1];
            p.push_back(d);
        }
        int max=0;
        sort(p.begin(),p.end(),greater<int>());
        return p[max];
        
    }
};