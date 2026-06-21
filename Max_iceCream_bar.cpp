class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxbuy=0;
        int costsum=0;
        sort(costs.begin(),costs.end());

        for( int i=0;i<costs.size();i++){
           costsum += costs[i];
           if(costsum <= coins){
            maxbuy++;
           }
           else{
            return maxbuy;
           }
        }
        return maxbuy;
        
    }
};