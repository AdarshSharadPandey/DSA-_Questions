//Function to check whether there is a subarray present with 0-sum or not.

/** Sum of subarray can be zero only if we got same sum of elements at any place or sum at any point becomess zero **/
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> h;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(h.find(sum)!=h.end() || sum==0)  return true;
            h.insert(sum);
        }
        return false;
    }