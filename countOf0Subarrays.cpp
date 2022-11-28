    long long int findSubarray(vector<long long int> &arr, int n ) 
    {
        //code here
        unordered_map<int, int> m;
        long long int sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            m[sum]++;
            sum+=arr[i];
            count+=m[sum];
        }
        return count;
    }