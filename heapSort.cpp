     // Heap Sort


 
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n)  
    {
      // Your Code Here
        int temp, i, j;
        i = 0;
        j = 2*i+1;
        swap(arr[0], arr[n]);
        
        while(j < n) {
            if(j < n-1 && arr[j+1] > arr[j]) {
                j++;
            }
            
            if(arr[j] > arr[i]) {
                swap(arr[j], arr[i]);
                i = j;
                j = 2*i+1;
            } else break;
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
        int temp = arr[n];
        int i = n;
        
        while(i > 0 && temp > arr[(i-1)/2]) {
            arr[i] = arr[(i-1)/2];
            i = (i-1)/2;
        }
        
        arr[i] = temp;
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        for(int i = 1; i < n; i++)
        {
            buildHeap(arr, i);
        }
        
        for(int i = n-1; i >= 0; i--)
        {
            heapify(arr, i);
        }
    }
