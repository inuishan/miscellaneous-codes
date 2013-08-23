#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",recursion(n));

	}
}
int recursion(int n)
{
	if(n==2)
		return 6;
	else return 6*recursion(n-1);
}