    //SORT EVEN INDICES IN ASCENDING AND ODD INDICES IN DECREASING ORDER



    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int> odd,even,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        for(int i=0;i<nums.size()/2+1;i++)
        {
            if(i<even.size())
                ans.push_back(even[i]);
            if(i<odd.size()) 
                ans.push_back(odd[i]);
        }
        return ans;
    }