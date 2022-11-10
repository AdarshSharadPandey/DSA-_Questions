//Kth smallest element


/** Approach 1: Sorting
The most straightforward method that comes to mind is sorting the given array and returning the required value.
We can find the solution in O(N Log N) time using either the Heap Sort or Merge Sort.
We can find the correct answer through it if array elements are distinct. **/

int kthSmallest(int arr[], int n, int k) 
{
    sort(arr,arr+n);
    return arr[k-1];
}



/** Approach 2: Heap
The previous approach of sorting and finding the Kth largest element is costly. Since the task is to return 
the Kth largest element, the idea would be to maintain a data structure that keeps the elements of the array
in sorted order, along with reducing the time complexity. The idea is to use a max-heap. Since max-heap keeps 
all the elements in sorted order, the problem simply converts to print the Kth element of the max-heap. **/

int kthSmallest(int arr[], int n, int k) 
{
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<n;i++)
        p.push(arr[i]);
    for(int i=0;i<k-1;i++)
        p.pop();
    return p.top();
}