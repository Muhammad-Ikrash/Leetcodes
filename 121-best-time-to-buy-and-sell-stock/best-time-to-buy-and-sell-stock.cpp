class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = -1;
        int maxProfit = 0;
        for (int i = prices.size() - 1; i >= 0; i--){
            if (max < prices[i]){
                max = prices[i];
            }
            int prof = max - prices[i];
            if (prof > maxProfit){
                maxProfit = prof;
            }
        }
        return maxProfit;
    }
};