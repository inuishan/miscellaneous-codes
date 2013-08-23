#include <stdio.h>
int main()
{
	int n,a,b,c,i;
	scanf("%d",&n);
	char arr[100000]={0};
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a==1)
		{	
			int count = 0;
			for(i=b;i<=c;i++)
			{
				if(arr[i]==0||arr[i]==3)
					count++;
			}
			printf("%d\n",count);
		}
		else{
			for(i=b;i<=c;i++)
			{	
				if(arr[i]==3)
					arr[i]=0;
				else
				arr[i]=arr[i]+1;
			}
		}
	}
	return 0;
}