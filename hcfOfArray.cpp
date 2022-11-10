int gcdArray(vector<int> arr)
{
    int arr[0];
    for(int i=0;i<arr.size()-1;i++)
        ans=__gcd(arr[i],arr[i+1]);
    return ans;
}