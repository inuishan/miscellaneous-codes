/*
 ============================================================================
 Name        : fibonacchi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printans(int n)
{
int flag=0;
long long factor;
long long a=1;
long long b=2;
long long fibo = 2;
while(1)
	{
	flag=checkfactor(n,fibo,&factor);
	if(flag==1)
		{
		printf("%lld %lld\n",fibo,factor);
		break;
		}
	fibo=a+b;
	a=b;
	b=fibo;
	}
}
inline int checkfactor(int n, long long fibo, long long *factor)
{
int min=fibo;
//printf("fsdf\n");
if(n<fibo)
	min=n;
int i=2;
for(i=2;i<=min;i++)
{
	if(fibo%i==0&&n%i==0)
	{
		*factor=i;
		return 1;
	}
}


return 0;
}
int main() {
	int n,k;
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d",&n);
		printans(n);
	}
	return 0;
}
