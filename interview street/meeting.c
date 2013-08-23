#include<stdio.h>
#include<malloc.h>
int main()
{
	char arr[70]={0};
	int m,k,i=0;
	scanf("%d",&m);
	scanf("%d",&k);
	int **busy;
	busy=(int **)malloc(m*sizeof(int**));
	for(i=0;i<m;i++)
	{
		busy[i]=(int *)malloc(4*sizeof(int));
	}
	int j=0,k=0;
	for(i=0;i<m;i++)
		for(j=0;j<4;j++)
		{
			scanf("%d",busy[i][j]);
			if(j==3)
			{
				int r1;
				int r2;
				r1=busy[i][0]*3+busy[i][1]/15;
				r2=busy[i][2]*3+busy[i][3]/15;
				for(k=r1;k<=r2;k++)
					arr[k]=1;
			}
		}
		int count=0;
		int start=0;
		int end=0;
	for(i=0;i<70;i++)
	{
		if(arr[i]==0)
			count++;
		else{
			count=0;
			if(count-1)


		}
	}	

	return 0;
}