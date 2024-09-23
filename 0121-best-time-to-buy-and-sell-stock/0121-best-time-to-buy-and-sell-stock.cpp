class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPr = 0, bastby = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i] > bastby){
                maxPr = max(maxPr,prices[i]-bastby);
            }
            bastby = min(prices[i],bastby);
        }
        return maxPr;
    }
};