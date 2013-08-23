#include<stdio.h>
#include<malloc.h>
int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&m);
	scanf("%d",&n);
	char **ptr;
	ptr=(char **)malloc(m*sizeof(char *));
	int i=0;
	for(i=0;i<m;i++)
		ptr[i]=(char *)malloc(n*sizeof(char));
	int j;
	// printf("m=%d\n",m );
	// printf("n=%d\n",n );
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			getchar();
			scanf("%c",&ptr[i][j]);
			
		}
	// for(i=0;i<m;i++)
	// 	for(j=0;j<n;j++)
	// 		printf("%c ",ptr[i][j]);
	int **flags;
	flags=(int **)malloc(m*sizeof(char));
	for(i=0;i<n;i++)
		flags[i]=(int *)calloc(n,sizeof(int));
	int **flags2;
	flags2=(int **)malloc(m*sizeof(char));
	for(i=0;i<n;i++)
		flags2[i]=(int *)calloc(n,sizeof(int));
	



	}
	return 0;
}