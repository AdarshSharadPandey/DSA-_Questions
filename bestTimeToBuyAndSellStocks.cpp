    
  // Best time to buy and sell stalks

    int maxProfit(vector<int>& prices)
    {
        int ans=0, mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(mini, prices[i]);
            ans=max(ans, prices[i]-mini);
        }
        return ans;
    }