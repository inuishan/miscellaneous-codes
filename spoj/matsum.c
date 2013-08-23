#include<stdio.h>
#include<malloc.h>
int main(int argc, char const *argv[])
{
	/* code */
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int mat_size,i;
		scanf("%d",&mat_size);
		int **p = (int **)calloc(mat_size,sizeof(int*));
		for(i=0;i<mat_size;i++)
		{
			p[i]=(int *)calloc(mat_size,sizeof(int));
		}
		char inst[10];
		scanf("%s",inst);
		printf("%s\n",inst);
		if (inst=="END")
		break;

	}
	return 0;
}