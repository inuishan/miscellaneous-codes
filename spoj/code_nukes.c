#include <stdio.h>
int n,k,N;
void determineAns(int a[],int low, int high,int A);
int main()
{	int a;
	scanf("%d%d%d",&a,&n,&k);
	if(a==0&&n==0&&k==0)
		return 0;
	N=n+1;
	int finalans[100]={0};
	int i=0;
	determineAns(finalans,0,k-1,a);
	for(i=0;i<k;i++)
		printf("%d ",finalans[i]);
	return 0;
}
void determineAns(int a[],int low, int high,int A)
{
if(low==high)
	return;
else{
	a[low]=A%(N);
	determineAns(a,low+1,high,A/N);

}
}