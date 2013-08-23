#include<iostream>
#include<cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int m,n;
	cin>>n>>m;
	if(n==0||m==0){
		printf("%d\n",0);
		return 0;
	}
	printf("%d\n",n+m-1);
	for(int i=1;i<=m;i++){
		printf("1 %d\n",i);
	}
	for(int i=2;i<=n;i++){
		printf("%d 1\n",i );
	}
	return 0;
}