    // Merge Sort




    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1 = m-l+1, n2 = r-m;
        int left[n1], right[n2];
        
        for(int i=0; i<n1; i++)
            left[i] = arr[l+i];
        for(int i=0; i<n2; i++)
            right[i] = arr[m+1+i];
            
        int i=0, j=0, k=l;
        
        while(i<n1 and j < n2)
        {
            if(left[i] <= right[j])
                arr[k++] = left[i++];
            else 
                arr[k++] = right[j++];
        }
        
        while(i < n1)
            arr[k++] = left[i++];
        while(j < n2)
            arr[k++] = right[j++];
    }
    
    
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l < r)
        {
            int mid = (l + r)/2;
            mergeSort(arr,l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
    }