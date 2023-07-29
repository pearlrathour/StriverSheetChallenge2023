class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices.size(), maxpro=0;
        int minprice=INT_MAX, idx;

        for(int i=0; i<l; i++){
            minprice=min(minprice,prices[i]);
            maxpro=max(maxpro, prices[i]-minprice);
        }
        return maxpro;
    }
};