class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>cp;
        cp.insert(cp.end(),nums1.begin(),nums1.end());
        cp.insert(cp.end(),nums2.begin(),nums2.end());
        sort(cp.begin(),cp.end());
        int n =cp.size();
        int mid=n/2;
        if(n%2==1){
             return cp[mid];
        }
        else{
            int r=cp[mid-1] + cp[mid];
            return r /2.0;
        }
    
        
    }
};