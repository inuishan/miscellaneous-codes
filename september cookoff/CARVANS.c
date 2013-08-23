#include<stdio.h>
#include<malloc.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,ans=1;
		scanf("%d",&n);
		int *speed;
		speed=(int *)malloc(n*sizeof(n));
		int i;
		int fst = scanf("%d",&speed[0]);
		for(i=1;i<n;i++)
		{
			scanf("%d",&speed[i]);
			if(speed[i]<=speed[i-1])
				ans++;
			else
				speed[i]=speed[i-1];
		}
		printf("%d\n",ans );
	}
	return 0;
}