    //REARRANGE ARRAY (positive at even indices and negative at odd indices)



    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> pos,neg,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()/2;i++)
        {
            if(i<pos.size())
                ans.push_back(pos[i]);
            if(i<neg.size()) 
                ans.push_back(neg[i]);
        }
        return ans;
    }