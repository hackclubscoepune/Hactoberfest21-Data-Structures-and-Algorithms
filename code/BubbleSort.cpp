/*Bubble sort, also referred to as comparison sort, is a simple sorting algorithm that repeatedly goes through the list, compares adjacent elements and swaps them if they are in the wrong order. This is the most simplest algorithm and inefficient at the same time. Yet, it is very much necessary to learn about it as it represents the basic foundations of sorting.

Algorithm: We compare adjacent elements and see if their order is wrong (i.e a[i] > a[j] for 1 <= i < j <= size of array; if array is to be in ascending order, and vice-versa). If yes, then swap them.

Implementation of Bubble sort in C++
*/

#include <iostream>
#include <vector>
 
using namespace std;
 
void BubbleSort (vector<int> &arr, int n)
{
   for (int i = 0; i < n - 1; ++i)
   { 
      bool swapped = false;
      for (int j = 0; j < n - i - 1; ++j)
      {
         if (arr[j] > arr[j+1]) //check if adjacent element is
                      //not in order
         {
            swap(arr[j], arr[j + 1]);
            swapped = true;
         }
      }
      // Value at n-i-1 will be maximum of all the values below this index.

      if(!swapped)
         break;
   } 
} 
