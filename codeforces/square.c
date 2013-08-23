#include<stdio.h>
#define CEILING(X) (X-(int)(X) > 0 ? (int)(X+1) : (int)(X))
int main(int argc, char const *argv[])
{
	long n,m,a;
	scanf("%ld",&n);
	scanf("%ld",&m);
	scanf("%ld",&a);
	long double k1,k2;
	k1 = CEILING((long double)n/a);
	k2 = CEILING((long double)m/a);

	long ans = k1*k2;
	printf("%ld\n",ans);

	return 0;
}