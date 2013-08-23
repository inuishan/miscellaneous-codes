#include<stdio.h>
#include<malloc.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int n,i,j;
	while(t--){
		scanf("%d",&n);
		int x;
		int *p = (int *)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d",x);
			p[i]=i;
			for(j=1;j<=x;j++){


			}
		}

	}
	return 0;
}