    int findSum(int arr[], int N)
    {
    	//code here.
    	int maxi=INT_MIN, mini=INT_MAX;
    	for(int i=0;i<N;i++)
    	{
    	    maxi=max(maxi,arr[i]);
    	    mini=min(mini,arr[i]);
    	}
    	return mini+maxi;
    }