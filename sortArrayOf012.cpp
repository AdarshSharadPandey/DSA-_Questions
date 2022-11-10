/*  Solution 1: Sorting 
Since the array contains only 3 integers, 0, 1, and 2. Simply sorting the array would arrange the elements in
increasing order.
Time Complexity: O(N*logN)  Space Complexity: O(1) */

void sortColors(vector<int>& nums)
{
	sort(nums.begin(),nums.end());
}



/* Solution 2: Keeping count of values
Since in this case there are only 3 distinct values in the array so it’s easy to maintain the count of all, 
Like the count of 0, 1, and 2. This can be followed by overwriting the array based on the frequency(count) of
the values.
Time Complexity: O(N)  Space Complexity: O(1) */

void sortColors(vector<int>& nums)
{
	int zero=0,one=0,two=0;
	for(int i=0;i<nums.size();i++)
	{
		if(nums[i]==0) zero++;
		else if(nums[i]==1) one++;
		else if(nums[i]==2) two++;
	}
	for(int i=0;i<nums.size();i++)
	{
		if(zero!=0) nums[i]=0,zero--;
		else if(one!=0) nums[i]=1,one--;
		else if(two!=0) nums[i]=2,two--;
	}
}



/*Solution 3: 3-Pointer approach
This problem is a variation of the popular Dutch National flag algorithm. 
In this approach, we will be using 3 pointers named low, mid, and high. 
We will be using these 3 pointers to move around the values. The primary goal here is to move 0s to the left
and 2s to the right of the array and at the same time all the 1s shall be in the middle region of the array
and hence the array will be sorted. 
Time Complexity: O(N)   Space Complexity: O(1) */

void sortColors(vector<int>& nums) 
{
    int lo = 0, hi = nums.size() - 1, mid = 0; 
    while (mid <= hi) 
    { 
        switch (nums[mid]) 
        { 
        // If the element is 0 
        case 0: 
            swap(nums[lo++], nums[mid++]); 
            break; 
        // If the element is 1 only increment current pointer. 
        case 1: 
            mid++; 
            break; 
        // If the element is 2 swap the current with high
        case 2: 
            swap(nums[mid], nums[hi--]); 
            break; 
        }
    }
}