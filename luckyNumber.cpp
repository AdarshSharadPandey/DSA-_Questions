    // LUCKY NUMBERS (min in row and max in column)



    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        set<int> minset,maxset;
        vector<int> ans;
        for(int i=0;i<matrix.size();i++)
        {
            int mini=INT_MAX;
            for(int j=0;j<matrix[0].size();j++)
            {
                mini=min(mini,matrix[i][j]);
            }
            minset.insert(mini);
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            int maxi=INT_MIN;
            for(int j=0;j<matrix.size();j++)
            {
                maxi=max(maxi,matrix[j][i]);
            }
            maxset.insert(maxi);
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(minset.find(matrix[i][j])!=minset.end() && maxset.find(matrix[i][j])!=maxset.end())
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }