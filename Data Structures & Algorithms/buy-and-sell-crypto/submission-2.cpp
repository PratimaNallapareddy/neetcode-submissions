class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int prof = 0;
        for(int i = 0; i < prices.size(); i++){
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }else{
                prof = max(prof, prices[i] - minPrice);
            }
        }
        return prof;
    }
};
