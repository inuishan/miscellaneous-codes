#include<stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int x,y;
	while(scanf("%d",&x)&&scanf("%d",&y)&&(x!=-1||y!=-1))
	{
		if(x==1||y==1)
			printf("%d+%d=%d\n",x,y,x+y);
		else printf("%d+%d!=%d\n",x,y,x+y);;
	}
	return 0;
}