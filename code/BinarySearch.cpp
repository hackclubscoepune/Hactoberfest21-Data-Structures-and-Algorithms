#include <bits/stdc++.h>

using namespace std;
/*
In this function I devide th array into two parts
and check the mid of the array.
There are three possibilities

First: the mid of the array is the target.

Second: the mid of the array is greater than the target
	in this case we neglect all the half which is greater than the target

Third: the mid of the array is less than the target
	in this case we neglect all the half which is Less than the target

and every iteration we update the mid of the array.
*/
bool BinarySearch(int  arr [],int target ,int n)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
            return true;
        else if(arr[mid]>target)
            end=mid-1;
        else
            start=mid+1;
    }
    return false;

}
int main()
{
    cout<<"Enter array size: ";
    int n;cin>>n;
    int arr[n+2];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

//Binary Search algorithm works on Sorted arrays.
    sort(arr,arr+n);
    cout<<"Enter target number: ";
    int target;cin>>target;

    if(BinarySearch(arr,target,n))
        cout<<"Founded Target number"<<endl;
    else cout<<"can't find Target number"<<endl;

    return 0;
}
