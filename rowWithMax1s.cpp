    //ROW WITH MAXIMUM 1s



    
    // BRUTE FORCE APPROACH


 int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
 {
     for(int column=0;column<m;column++)
     {
         for(int row=0;row<n;row++)
         {
             if(arr[row][column]==1) 
                 return row;
         }
     }
     return -1;
 }





    // OPTIMIZED APPROACH


    int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    // code here
	    int i=0,j=m-1,mini=INT_MAX,ans=0,flag=1;
	    while(j>=0 && i<n)
	    {
	        if(arr[i][j]==1)
	            flag=0,j--;
	        else
	            i++;
	       if(j<mini)
	           mini=j,ans=i;
	    }
	    if(flag) return -1;
	    return ans;
	}