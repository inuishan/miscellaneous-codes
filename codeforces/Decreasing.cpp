#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int *p = new int[a];
	for(int i=0;i<a;i++){
		p[i]=i;
	}
	int count = a-1;
	if(b>0){
		cout<<p[count]<<" ";
	}
	while(b--){
		// cout<<"Yes";
		// cout<<p[count]<<" ";
		cout<<p[--count]<<" ";
	}
	for(int i=0;i<=count;i++){
		cout<<p[i]<<" ";
	}
	return 0;
}