class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit= 0;
        int low =INT_MAX;
        for(int num:prices){
            low=min(low,num);
            maxprofit=max(maxprofit,num-low);
        }
        return maxprofit;

        
    }
};