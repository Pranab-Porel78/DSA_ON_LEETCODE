class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.size();
        int k=stones.size();
        int count=0;
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                if(stones[i]==jewels[j]){
                    count++;
                }
            }
        }
        return count;
    }
};