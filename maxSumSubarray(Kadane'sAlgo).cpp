//Function to find the sum of contiguous subarray with maximum sum.
// Kadane's Algorithm
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
    }