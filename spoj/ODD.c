#include<stdio.h>
int main()
{
	int t,n,count=0;
	scanf("%d",&t);
	while(t--)
	{	
		count=0;
		scanf("%d",&n);
		while(n!=1)
		{
			n=n>>1;
			//printf("number = %d\n",n );
			count++;
		}
		//printf("count\n");
		printf("%d\n",2<<(count-1));
	}
	return 0;
}