class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> result;
        bool discount;
        // we run 2 for loops to compare i and j then subtract then push back
        // result like this.
        for (int i = 0; i < prices.size(); i++) {
            discount = false;
            int disrate;
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    disrate = prices[i] - prices[j];
                    discount = true;
                    break;
                }
            }
            if (discount == true) {
                result.push_back(disrate);
            } else if (discount == false) {
                result.push_back(prices[i]);
            }
            
        }
        return result;
    }
};