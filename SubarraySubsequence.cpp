#include <bits/stdc++.h>
using namespace std;


int maxSumSubSequence(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        if(arr[i]>=0)sum+=arr[i];
    return sum;
}


void allSubArrays(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
         {
             for(int k=i;k<=j;k++)cout<<arr[k]<<" ";
             cout<<endl;
         }
    }
}

void allSubSequences(int arr[], int n, int i, int seq[],int si)
{
    if(i>=n)
    {
        cout<<"{ ";
        for(int k=0;k<si;k++)
            cout<<seq[k]<<" ";
        cout<<"}"<<endl;
        return;
    }
    seq[si]=arr[i];
    allSubSequences(arr,n,i+1,seq,si+1);
    allSubSequences(arr,n,i+1,seq,si);
}

int maxSumSubSequenceOfSizeK(int arr[], int n, int i, int k)
{
    if(k==0) return 0;
    if(i >= n) return -100000; //For subsequences of size less than k
    int included = maxSumSubSequenceOfSizeK(arr,n,i+1,k-1);
    int not_included = maxSumSubSequenceOfSizeK(arr,n,i+1,k);
    return max(included+arr[i], not_included);
}

int maxSumSubArray(int arr[], int n)
{
    int sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        ans=max(ans,sum);
        if(sum<0)
            sum=0;
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n], seq[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxSumSubArray(arr,n)<<endl;
    cout<<maxSumSubSequence(arr,n)<<endl;
    allSubArrays(arr,n);
    allSubSequences(arr, n, 0, seq, 0);
    cout<<maxSumSubSequenceOfSizeK( arr, n, 0, k);
    return 0;
}
