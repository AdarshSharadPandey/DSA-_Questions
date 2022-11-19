    //Quick Sort



    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
        int piIdx=partition(arr,low,high);
        quickSort(arr,low,piIdx-1);
        quickSort(arr,piIdx+1,high);
        } 
        return;
    }
    
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[high];
        int i=low;
        int j=low;
        while(i<high){
            if(arr[i]>=pivot){
                i++;
            }else{
                swap(arr,i,j);
                i++;
                j++;
            }
            
        }
        swap(arr,i,j);
        return j;
    }

    
    void swap(int arr[],int lo,int hi)
    {
        int temp=arr[lo];
        arr[lo]=arr[hi];
        arr[hi]=temp;
    }