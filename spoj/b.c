#include <stdio.h>
#include <stdlib.h>

int main(){

	int num[30][3] = {};
	//printf("%d\n\n",RAND_MAX);
	srand(time( NULL ));
	int i,j,k,l,m,n,o;
	
	for( n=0;n<100000; n++)
	{
		o = (rand()%30) + 1;
		
		printf("%d\n",o);

		for( i=0; i< o ; i++)
		{
			num[i][0] = (rand()%65000) + 1;
			num[i][1] = (rand()%65000) + 1;
			num[i][2] = (rand()%65000) + 1;

			for(j=0; j<i ; j++)
			{
				for(k=0;k<3;k++)
				{
					if(num[j][k] == num[i][0])
					{
						for(l=0;l<3;l++)
						{
							if(num[j][l] == num[i][0])
							{
								for(m=0;m<3;m++)
								{
									if(num[j][m] == num[i][0])
									{
										num[i][0]++;
										i--;
									}
								}
								break;
							}
						}
						break;
					}
				}
			}
		}

		for( i=0; i< o ; i++)
		{
			printf("%d %d %d\n",num[i][0],num[i][1],num[i][2]);
		}
	}

	printf("0\n");
}