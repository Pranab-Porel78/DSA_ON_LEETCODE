class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++) {
            int j = 0;
            while (j < nums2.size() && nums2[j] != nums1[i]) {
                j++;
            }
            int ans = -1;
            j++;
            while (j < nums2.size()) {
                if (nums2[j] > nums1[i]) {
                    ans = nums2[j];
                    break;
                }
                j++;
            }
            res.push_back(ans);
        }
        return res;
    }
};