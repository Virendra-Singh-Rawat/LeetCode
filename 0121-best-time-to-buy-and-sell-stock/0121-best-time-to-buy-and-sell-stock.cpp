class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minp = prices[0];    //minimum price
        int maxp = 0;           //maximum profit at start is 0
        for(int i=0;i<n;i++){
            maxp = max(maxp,prices[i]-minp);
            minp = min(prices[i],minp);
        }
        return maxp;
    }
};