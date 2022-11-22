    // Longest Consequitive Subsequence


    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
       map<int,int> m;
       int maxi=0;
       for(int i=0;i<N;i++)
       {
           m[arr[i]]++;
           maxi=max(maxi,arr[i]);
       }
       int ans=0,count=0;
       for(int i=0;i<=maxi;i++)
       {
           if(m[i]>0) count++;
           else count=0;
           ans=max(ans,count);
       }
       return ans;
    }