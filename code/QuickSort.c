#include<stdio.h>

void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y= temp;
}

int Part(int arr[],int l,int h)
{
    int pivot = arr[l];
	int i=l;
	int j=h;
	while(i<j)
	{
		
	do{
		i++;
	}while(arr[i]<= pivot);
	
	do{
		j--;
	}while(arr[j]>= pivot);
	
	if(i<j)
	{
		swap(&arr[i],&arr[j]);
	}
  }
  
  swap( &arr[l], &arr[j]);
  return j;
}

void Quicksort(int arr[],int l,int h)
{
	if(l<h)
	{
		int p = Part(arr, l,h);
		Quicksort(arr,l,p-1);
		Quicksort(arr,p+1,h);
	}
}
int main()
{
	int arr[100];
	int i,j,n,r;
	
	printf("Enter the no of elements you want in your array:");
	scanf("%d",&n);
	printf("\n Enter %d elements:",n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n Unsorted array:");
	
	for(j=0; j<n; j++)
	{
		printf("\n %d",arr[j]);
	}
	
	Quicksort(arr, 0, n-1);
	
	printf("\n Sorted array:");
	
	for(r=0; r<n; r++)
	{
		printf("\n %d",arr[r]);
	}
	
	
}



