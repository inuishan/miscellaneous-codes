#include<stdio.h>

int main()
{
	int t,m,count,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&m);
		if(m&1)//odd
		{
			count=0;
			temp=m;
			while(temp!=1)
			{
				temp=temp>>1;
				count++;
			}
			printf("%d\n",2<<(count-1));
		}
		else{   //even
			//I fucked up earlier here
			temp=m;
			count=0;
			while(temp!=1)
			{
				temp=temp>>2;
				count++;
			}
			printf("%d\n",2<<(2*(count-1)) );
		}
	}
return 0;
}