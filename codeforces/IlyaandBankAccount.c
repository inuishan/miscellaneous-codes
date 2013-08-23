#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	if(n>=-9){
		printf("%d\n",n );
	}
	else{
		n = (-1)*n;
		int n2 = n%10;
		int 
		int n3 = n%100;
		printf("n2 = %d\n",n2 );
		printf("n3 = %d\n",n2 );
		if(n3>n2){
			n = n/10;
		}
		else{
			n = n/100;
			n = 10*n + n2;
		}
		printf("%d\n",n );
	}
	return 0;
}