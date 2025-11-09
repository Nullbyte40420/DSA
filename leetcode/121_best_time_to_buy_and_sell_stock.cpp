#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];   // Track the lowest price seen so far
        int maxProfit = 0;          // Track the maximum profit

        for(int i = 1; i < prices.size(); i++) {
            // If we find a lower price, update minPrice
            if(prices[i] < minPrice)
                minPrice = prices[i];
            else
                // Check if selling today gives more profit
                maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};