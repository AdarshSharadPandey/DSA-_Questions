    int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int sumA=0,sumB=0;
        map<int,int> hash;
        for(int i=0;i<n;i++)
            sumA+=A[i],hash[A[i]]++;
        for(int i=0;i<m;i++)
            sumB+=B[i];
        if(sumA==sumB)
            return 1;
        sort(A,A+n);
        sort(B,B+m);
        int i=0,j=0;
        while(i<n&&j<m)
        {
          int x = A[i], y = B[j];
          swap(A[i],B[j]);
          sumA = sumA-x+A[i];
          sumB = sumB-y+B[j];
          if(sumA==sumB)
          return 1;
          else if(sumA<sumB)
         {
              j++;
         }
          else 
          {
              i++;
          }
      }

      return -1;
        
	}