#include<stdio.h>
#include<malloc.h>
int *n, *p;
int readString(int a[]);
int multiply(int a[],int len);
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	int i;
	while(t--)
	{
		n=(int*)calloc(500,sizeof(int));
		p=(int*)calloc(9,sizeof(int));
		int l1 = readString(n);
		//int l2 = readString(p);
		// printf("%d\n",x );
		// for(i=0;i<x;i++)
		// 	printf("%c",n[i] );
		// printf("\n");
		int flag=multiply(n,l1);
		for(i=0;i<l1;i++)
		 	printf("%c",n[i] );
		 printf("\n");


	}
	return 0;
}
int readString(int a[])
{	
	int i=0;
	char c;
	c=getchar();
	while(c!='\n')
	{
		a[i++]=c;
		c=getchar();
	}
	return i;
}
int multiply(int a[],int len)
{
int i=len-1,flag1=0,flag2=0,temp;
for(i=len-1;i>=0;i--)
	{
		char temp = a[i]*2;
		printf("temp = %c\n",temp );
		// if(temp<9&&flag1==1)
		// {
		// 	a[i]=temp+1;
		// 	flag1=0;
		// }
		// else if(flag1==1){
		// 	a[i]=temp+1;
		// 	flag1=0;
		// }
	

	if(temp>=10)
	{
		
		temp=temp+flag1;
		a[i]=temp%10;
		
	}
	else{
		temp=temp+flag1;
		a[i]=temp;
		flag1=0;
	}

}

}