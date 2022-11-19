    // Find Lucky (element = its frequency)


    int findLucky(vector<int>& arr) 
    {
        int ans=-1;
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        for(int i=0;i<arr.size();i++)
            if(arr[i]==m[arr[i]] && arr[i]>ans)
                ans=arr[i];
        return ans;
    }