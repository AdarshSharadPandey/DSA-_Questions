    // SORT ARRAY BY PARITY 2 
    /* Even numbers at even indices and odd at odd*/


    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        vector<int> odd,even,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<even.size())
                ans.push_back(even[i]);
            if(i<odd.size()) 
                ans.push_back(odd[i]);
        }
        return ans;
    }