    //Sort array by parity (even in start, odd at end)

    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int even=0,odd=nums.size()-1;
        while(even<odd)
        {
            if(nums[even]%2==1)
            {
                swap(nums[even],nums[odd]);
                odd--;
            }
            else if(nums[odd]%2==0)
            {
                swap(nums[even],nums[odd]);
                even++;
            }
            else
            {
                even++,odd--;
            }
        }
        return nums;
    }