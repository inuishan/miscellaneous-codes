#include<stdio.h>
#include<malloc.h>
//int prime(int *);
int main()
{
int t,i=0;
scanf("%d",&t);
while(i<t)
	{
	long m,n;
	int *ptr,j=0,*tmp,flag=0,k,l,q;
	scanf("%lu%lu",&m,&n);
	// ptr=(int *)malloc((n-m)*sizeof(int)+1);
	ptr = (int *)calloc(n-m+1,sizeof(int));    //0 means prime
	// tmp=ptr;
	// for(j=0;j<n-m+1;j++)
	// 	{
	// 	*ptr=1;
	// 	ptr++;
	// 	}
	// ptr=tmp;
	if(m==2)
		{
			printf("%d\n",2);
			m=m+1;
		}
	if(m==1)
		m=m+2;	
	for(j=m;j<=n;j++)
		{
		if(j%2!=0)
		{//printf("Loop encountered\n");
		tmp=++ptr;
		--ptr;
		flag=0;
		if(*ptr!=-1)
			{
			for(k=3;k*k<j;k=k+2)
				{
				if(j%k==0)
					{
//					printf("Loop encountered\n");
					flag=-1;
					break;
					}	
				}
			if(flag==0&&j!=4)   //why j!=4??
			{//printf("Loop\n");
			printf("%d\n",j);}
			//q=*ptr;
			for(l=1;l*j<=n;l++)			
				{
				*ptr=-1;
				ptr=ptr+j;
				}
			}
		ptr=tmp;
		}
	}
	i++;
	printf("\n");
	}
}
		
					
		
	
	
	


