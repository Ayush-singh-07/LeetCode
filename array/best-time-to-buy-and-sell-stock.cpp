class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int smallest = INT_MAX, maxi = INT_MIN;
        int s = -1, m = -1;

        for(int i=0; i<prices.size(); i++){
            if(smallest > prices[i]){
                smallest = prices[i];
                s = i;
            }
            if(maxi < prices[i] && i > s){
                maxi = prices[i];
                m = i;
            }
        }

        if(s <0 || m < 0) return 0;
        return  prices[m]-prices[s];
    }
};