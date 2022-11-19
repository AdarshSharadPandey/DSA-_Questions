    // KIDS AND CANDIES (after giving all extra candies, maximum or not)

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++)
            maxi=max(maxi,candies[i]);
        vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies<maxi) ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }