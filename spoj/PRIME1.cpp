#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	bool *arr;
	arr = new bool[m-n+1]; //0 means it is prime
	// cout<<arr[0];
	int i=0;
	for(i=0;i<m-n+1;i++)
	{
		arr
	}

	return 0;
}
bool checkprime(int x) //0 means prime
{
	int i=2,flag=0;
	for(i=2;i*i<=x;i++)
		if(x%i==0)
		{
			return 1;
		}
	return 0;	
}