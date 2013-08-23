#include<stdio.h>
int main()
{
	int n,m;
	while((scanf("%d%d",&n,&m)==2)&&(n||m)){
		if(n>m) printf("%s\n","0.000000");
		else printf("%.06f\n",(double)(m-n+1)/(double)(m+1) );
	}
	return 0;
}