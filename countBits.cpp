
/* Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n),
ans[i] is the number of 1's in the binary representation of i. */

    vector<int> countBits(int n) 
    {
        vector<int> arr(n+1,0);
        arr[0]=0;
        if(n>0)arr[1]=1;
        for(int i=2;i<=n;i++)
        {
            int mask=1;
            while(mask<=n)
            {
                if((mask&i)!=0) arr[i]++;
                mask<<=1;
            }
        }
        return arr;
    }