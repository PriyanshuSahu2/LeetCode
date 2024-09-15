class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int curr =prices[0];
        for(int i =0;i<prices.size();i++){
            if(curr>prices[i]){
                curr = prices[i];
            }
            cout<<(prices[i] -curr);
            mx = max(prices[i]- curr,mx);
        }
        return mx;

    }
};

