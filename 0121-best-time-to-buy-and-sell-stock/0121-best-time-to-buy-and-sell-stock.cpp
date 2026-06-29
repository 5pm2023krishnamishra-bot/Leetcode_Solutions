class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smallest=INT_MAX;
        int maxP=0;
        for(int i=0;i<prices.size();i++){
            if(smallest>prices[i]){
                smallest=prices[i];
            }
            maxP=max(maxP , prices[i]-smallest);
        }
        return maxP;
    }
};