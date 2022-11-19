    //Sum Zero (Return an array of size n with sum of elements=0)


    vector<int> sumZero(int n) 
    {
        vector<int> ans;
        int x=1;
        for(int i=1;i<=n/2;i++)
        {
            ans.push_back(x);
            ans.push_back(0-x);
            x++;
        }
        if(n%2==1) ans.push_back(0);
        return ans;
    }