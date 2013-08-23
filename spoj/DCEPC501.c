#include<stdio.h>
#include<malloc.h>
long max;
int n;
int *ptr;
long *ans;
long findMax(long a,long b,long c);
long findAns(int startIndex);
int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{	
		ans=(long*)calloc(100010,sizeof(long));//[100000]={0};
		scanf("%d",&n);
		int i=0;
		ptr = (int *)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
			scanf("%d",&ptr[i]);
		if(n>=3)
		printf("%ld\n",findMax(ptr[0]+findAns(2),ptr[0]+ptr[1]+findAns(4),ptr[0]+ptr[1]+ptr[2]+findAns(6)) );
		else{
			int ans2=0;
			for(i=0;i<n;i++)
				ans2+=ptr[i];
			printf("%d\n",ans2 );
		}
		free(ans);
	}
	return 0;
}
long findMax(long a,long b,long c)
{
	long max=a;
	if(b>a&&b>c)
		max=b;
	else if(c>a&&c>b)
		max=c;
	return max;
}
long findAns(int startIndex)
{
if(startIndex>n)
	return 0;
//memoization
int x = ans[startIndex];
if(x)
	return x;
if(startIndex+2<n)
{
ans[startIndex]=findMax(ptr[startIndex]+findAns(startIndex+2),ptr[startIndex]+ptr[startIndex+1]+findAns(startIndex+ 4),ptr[startIndex]+ptr[startIndex+ 1]+ptr[startIndex+ 2]+findAns(startIndex+ 6));
return ans[startIndex];
}
if(startIndex+1<n)
{
	ans[startIndex]=findMax(ptr[startIndex]+findAns(startIndex+2),ptr[startIndex]+ptr[startIndex+1]+findAns(startIndex+ 4),0);
	return ans[startIndex];
}
ans[startIndex]=ptr[startIndex];
return ans[startIndex];



}
