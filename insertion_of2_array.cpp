class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int n=nums1.size();
        int k=nums2.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    if(find(arr.begin(), arr.end(), nums1[i]) == arr.end()) {
                          arr.push_back(nums1[i]);
                    }
                   
                }
            }
        }

        return arr;
        
    }
};