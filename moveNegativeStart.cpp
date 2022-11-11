// MOVE ALL NEGATIVE NUMBERS TO STARTING OF ARRAY

/**
Approach 1: 
Sort the array simply.  t/c: O(n.log(n)) s/c: O(1)
**/

void moveNegativeStart(vector<int>& arr)
{
  sort(arr.begin(),arr.end());
}




/**
Approach 2:
The idea is to simply apply the partition process of quicksort. This function takes first element as pivot(j),
if i encounters a negative number, it swaps it with element at j and places all negative numbers to left of pivot
and all positive to right of pivot.   t/c: O(n)  s/c: O(1)
**/

void moveNegativeStart(int arr[], int n)
{
    int j = 0;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < 0) 
        {
            if (i != j) swap(arr[i], arr[j]);
            j++;
        }
    }
}





/**
Approach 3:
We simply take two variables(pointers) like left and right which hold the 0 and N-1 indexes. Check If the left and right
pointer elements are negative then simply increment the left pointer. Otherwise, if the left element is positive and 
the right element is negative then simply swap the elements, and simultaneously increment and decrement the left and 
right pointers. Else if the left element is positive and the right element is also positive then simply decrement the
right pointer. Repeat until the left pointer ≤ right pointer.  t/c: O(n)    s/c: O(1)
**/

void moveNegativeStart(int arr[], int n)
{
   int left=0, right=n-1
   while (left<=right)
   {
        // if the left and the right elements are negative
        if (arr[left]<0 && arr[right]<0)  
        	  left+=1;
     
        // if the left pointer element is positive and the right pointer element is negative
        else if (arr[left]>0 && arr[right]<0)
        {
             swap(arr[left],arr[right]);
             left+=1;
             right-=1;
        }
     
        // if both the elements are positive
        else if (arr[left]>0 && arr[right] >0)
             right-=1;

        // If left negative right positive
        else
        {
             left += 1;
             right -= 1;
        }
    }
}




/**
Approach 4:
Here, we will use the famous Dutch National Flag Algorithm for two “colors”. The first color will be for all
negative integers and the second color will be for all positive integers. We will divide the array into three
partitions with the help of two pointers, low and high. 1) ar[1 to low-1] negative integers, 2) ar[low to high] unknown
3) ar[high+1 to N] positive integers. Now, we explore the array with the help of low pointer, shrinking the unknown
partition, and moving elements to their correct partition in the process. We do this until we have explored all the
elements, and size of the unknown partition shrinks to zero.  t/c: O(n)    s/c: O(1)
**/

void moveNegativeStart(int arr[],int n)
{
      int low =0,high = n-1;
      while(low<high)
      {
           if(arr[low]<0)  low++;
           else if(arr[high]>0)  high--;
           else swap(arr[low],arr[high]);
      }
}
