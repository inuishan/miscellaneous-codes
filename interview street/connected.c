#include<stdio.h>
#include<malloc.h>
int main()
{
	int t,n,i=0,j=0;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char **mat;
		int connections = 0,connections_l=0;
		scanf("%d",&n);
		mat = (char **)malloc(sizeof(char **)*n);
		for(i=0;i<n;i++)
			{
				mat[i]=(char*)malloc(sizeof(char)*n);
			}
			
		for(i=0;i<n;i++)
		{
			connections_l=0;
			for(j=0;j<n;j++)
				{
					scanf("%c",&mat[i][j]);
					getchar();
					if(j!=0)
					{
						if(mat[i][j]==1&&mat[i][j-1]!=1)
							connections_l++;
					}
					else{
						if(mat[i][0]==1)
							connections_l++;

					}

				}

				for(j=0;j<n;j++)
					printf("%c ",mat[i][j] );
				printf("\n");
				printf("%d %d\n",connections,connections_l );
				connections+=connections_l;


				//see its upper and right upper corner
				int flag=0;
				if(i!=0)
				for(j=0;j<n;j++)
				{
					if(mat[i][j]==0)
						flag=0;
					else{
							if(flag==0)
							{
								flag=1;
								int ur,u,ul;
								ur=j-1;
								u=j;
								ul=j+1;
								if(mat[i-1][u]==1)
								{
									connections--;
									break;
								}
								if(ul>=0&&mat[i-1][ul]==1)
								{
									connections--;
									break;
								}
								if(ur<=n-1&&mat[i-1][ur]==1)
								{
									connections--;
									break;
								}

							}
					}
				}



		}	
		printf("%d\n",connections );	
	}
	return 0;
}