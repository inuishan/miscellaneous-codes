#include<stdio.h>
void quicksort(int arr[], int low, int high);
int partition(int arr[],int low, int high);
void swap(int arr[],int a, int b);
int main()
{	

	int a[10]={90,67,99,203,9,89,243,23,6754,1};
	int i;
	quicksort(a,0,9);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
void quicksort(int arr[], int low, int high)
{	
	if(low<high)
	{
	int q = partition(arr,low,high);
	quicksort(arr,low,q);
	quicksort(arr,q+1;high);
	}
}
int partition(int arr[],int low, int high)
{
int pivot=arr[high];
int small = low,big = high-1;
	while(low!=high)
	{
		if(arr[small]<=pivot)
			small++;
		else 
			{
				swap(arr,small,big)
				big--;
			}

	}
	swap(arr,)
}
void swap(int arr[],int a, int b)
{
	arr[a] ^= arr[b];
    arr[b] ^= arr[a];
    arr[a] ^= arr[b];

}