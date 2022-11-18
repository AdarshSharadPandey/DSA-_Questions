// Move zeroes to last


    void moveZeroes(vector<int>& nums) 
    {
        int count=0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count++;
            else
                arr.push_back(nums[i]);
        }
        for(int i=1;i<=count;i++)
            arr.push_back(0);
        for(int i=0;i<nums.size();i++)
            nums[i]=arr[i];
    }