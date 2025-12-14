#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Leetcode Grind Day - 1 (Problem - 2)
    int maxProfit(vector<int>& prices) {
        int buy = INT_MIN;
        int sell = 0;
        for(int i = 0 ; i < prices.size() ; i++){
            buy = max(buy , -prices[i]); // best price to buy
            sell = max(sell , buy + prices[i]); // best price to sell
        }
        return sell;
    }
};