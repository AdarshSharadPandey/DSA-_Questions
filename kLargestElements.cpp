// K Largest Elements in an array


/* Approach - 1 : Sorting    T/C: O(n.logn)  S/C: O(1)
Sort array and return elements from n-1 to n-k */

vector<int> kLargest(int arr[], int n, int k) 
{
	vector<int> v;	
    sort(arr,arr+n);
    for(int i=n-1;i>n-k-1;i--)
	    v.push_back(arr[i]);
	return v;
}



/* Approach - 2 : Max Heap     T/C: O(n)  S/C: O(n)
Push elements in priority queue (heap) and then pop and return top k elements */

vector<int> kLargest(int arr[], int n, int k) 
	{
	    vector<int> v;
	    priority_queue<int> pq;
	    for(int i=0;i<n;i++)
	        pq.push(arr[i]);
	    for(int i=0;i<k;i++)
	    {
	        v.push_back(pq.top());
	        pq.pop();
	    }
	    return v;
	}
