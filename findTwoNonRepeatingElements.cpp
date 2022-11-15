       // Find two non repeating numbers 

        // Finding Commutative XOR
        int comXOR=0;
        for(int i=0;i<nums.size();i++)
        {
            comXOR=comXOR^nums[i];
        }
        // Counting the number of zeroes at end in commutative xor to find first occurence of 1
        // The bit where first occurrence is 1, means our both ans have different bits here
        int count=0;
        while(comXOR)
        {
            if(comXOR&1) break;
            count++;
            comXOR=comXOR>>1;
        }
        // We will separate elements according to that bit is zero or one
        vector<int> v0,v1;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]>>count)&1) v1.push_back(nums[i]);
            else  v0.push_back(nums[i]);
        }
        /* Since all the elements in both vectors have duplicate other than answers, we will again
        find commutative xor */
        int a=0,b=0;
        for(int i=0;i<v0.size();i++)
        {
            a=a^v0[i];
        }
        for(int i=0;i<v1.size();i++)
        {
            b=b^v1[i];
        }
        return {min(a,b),max(a,b)};