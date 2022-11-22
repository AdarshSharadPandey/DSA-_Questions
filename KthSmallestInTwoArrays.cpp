    // Kth Smallest element in two arrays

    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i=0;i<max(m,n);i++)
        {
            if(i<n) minHeap.push(arr1[i]);
            if(i<m) minHeap.push(arr2[i]);
        }
        k--;
        while(k--)
        {
            minHeap.pop();
        }
        return minHeap.top();
    }