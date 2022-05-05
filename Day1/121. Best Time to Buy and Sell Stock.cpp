#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy=100000000, maxPro=0;
        for(int i=0; i<prices.size(); i++){
            minBuy=min(minBuy,prices[i]);
            maxPro = max( (prices[i]-minBuy), maxPro );
        }
        return maxPro;
    }
};