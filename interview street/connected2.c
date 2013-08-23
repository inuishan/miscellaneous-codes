	#include<stdio.h>
	#include<malloc.h>
	int main()
	{
		int t,n,i=0,j=0;
		scanf("%d",&t);
		int x=0;
		//getchar();

		while(t--)
		{

			int **mat;
			int connections = 0,connections_l=0;
			scanf("%d",&n);
			mat = (int **)malloc(sizeof(int *)*n);
			for(i=0;i<n;i++)
				{
					mat[i]=(int*)malloc(sizeof(int)*n);
				}
				
			for(i=0;i<n;i++)
			{
				connections_l=0;
				for(j=0;j<n;j++)
					{
						scanf("%d",&mat[i][j]);
						//getchar();
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

					// for(j=0;j<n;j++)
					// 	printf("%d ",mat[i][j] );
					//printf("\n");
					connections+=connections_l;
					// printf("conn= %d  conn_l= %d\n",connections,connections_l );
					


					//see its upper and right upper corner
					int flag=0;
					if(i!=0)
					for(j=0;j<n;j++)
					{	
						//printf("%s\n","andar" );
						if(mat[i][j]==0)
							flag=0;
						else{
								if(flag==0)
								{
									flag=1;
									int ur,u,ul;
									ur=j+1;
									u=j;
									ul=j-1;
									if(ul>=0&&mat[i-1][ul]==1)
									{
										if(ur<=n-1&&mat[i-1][ur]==1)
										{
											connections-=2;
											continue;
										}	

									}
									if(mat[i-1][u]==1)
									{

										connections--;
										// printf("a final conn=%d\n",connections );
										continue;
									}
									if(ul>=0&&mat[i-1][ul]==1)
									{
										connections--;
										// printf("2 final conn=%d\n",connections );
										continue;
									}
									if(ur<=n-1&&mat[i-1][ur]==1)
									{
										connections--;
										// printf("3 final conn=%d\n",connections );
										continue;
									}

								}
						}
					}



			}	
			// if(x==0)
			// {
			// 	printf("%d\n",connections-1);
			// 	x++;
			// }
			// else
			printf("%d\n",connections );	
		}
		return 0;
	}