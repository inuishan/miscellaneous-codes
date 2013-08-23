#include<stdio.h>
void mergesort(int arr[],int low, int high);
void merge(int arr[],int low, int mid, int high);
int main()
{
	int a[10]={90,67,99,203,9,89,243,23,6754,1};
	int i;
	mergesort(a,0,9);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
void mergesort(int arr[],int low, int high)
{
	if(low<high)
	{
		int mid = (low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}

}
void merge(int arr[],int low, int mid, int high)
{
//printf("%s\n", "hi");
int *temp = (int *)malloc((high-low+1)*sizeof(int));
int counter1=low,counter2=mid+1,counter3=0;
while(counter1<=mid && counter2<=high)
	{
		if(arr[counter1]<arr[counter2])
		{
			temp[counter3++]=arr[counter1++];
		}
		else temp[counter3++]=arr[counter2++];
	}
if(counter1<=mid)
	{
		while(counter1<=mid)
		{
			temp[counter3++]=arr[counter1++];
		}
	}	
else{
		while(counter2<=high)
		{
			temp[counter3++]=arr[counter2++];
		}
	}
int i;
counter3=0;
for(i=low;i<=high;i++)
	{
		arr[i]=temp[counter3++];
	}		

}