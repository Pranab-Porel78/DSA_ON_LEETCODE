class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n= arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                int index=i+1;
                arr.insert(arr.begin() + index, 0 );
                arr.pop_back();
                i++;
                
            }
        }
        
    }
};