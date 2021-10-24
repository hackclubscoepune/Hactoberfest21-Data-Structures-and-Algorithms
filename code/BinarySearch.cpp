// C++ code to search x in arr[] using binary search. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
    {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);	
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 6, 7, 15, 21, 45, 51, 76 };
	int x = 21;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
        ? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}

// Time Complexity : O(log n)
// Space Complexity: O(1)