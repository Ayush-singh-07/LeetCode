class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_profit = 0;
        int max_so_far = prices[0];

        for(int i=0; i<prices.size(); i++){
            max_so_far = min(max_so_far, prices[i]);
            int profit = prices[i] - max_so_far;
            max_profit = max(max_profit, profit);
        }

        return  max_profit;
    }
};