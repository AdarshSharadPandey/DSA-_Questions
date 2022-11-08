int evenlyDivides(int N)
{
    //code here
    int count=0;
    for(int n=N;n>0;n/=10)
    {
        int x=(n%10);
        if(x!=0 && N%x==0) count++;
    }
    return count;
}