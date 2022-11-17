// TWO SUM

        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
            else if(nums[i]+nums[j]<target)
                i++;
            else
                j--;
        }
        return ans;