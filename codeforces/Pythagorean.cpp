#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	// int *arr = new int[n];
	// int *ab = new int[100000000];
	int ab;
	double c;
	int cnt = 0;
	for(int a=1;a<=n;a++){
		for(int b=a;b<=n;b++){
			ab = a*a + b*b;
			c = sqrt(ab);
			if((c-(int)c)==0&&(c<=n)){
				// cout<<c<<endl;
				cnt++;
			}
		}
	}
	cout<<cnt;
	// for(int i=0;i<cnt;i++)
	// 	cout<<ab[i]<<endl;
	// sort(ab,ab+cnt);
	// for(int i=0;i<cnt;i++)
	// 	cout<<ab[i]<<endl;
	// int *c = new int[n];
	// for(int i=1;i<=n;i++)
	// 	c[i] = i*i;
	return 0;
}