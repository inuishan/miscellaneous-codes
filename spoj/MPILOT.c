#include<stdio.h>
int pilots;
int captain[11111];
int assist[11111];
int dummy1[5555],dummy2[5555];
int main(){
	int p,a;
	int *prev,*curr,*temp;
	int prevmax,currmax;
	scanf("%d",&pilots);
	for(p=0;p<pilots;p++)
		scanf("%d%d",&captain[p],&assist[p]);
	curr=dummy1;prev=dummy2;
	curr[1]=assist[0];
	currmax=1;
	for(p=1;p<pilots;p++){
		temp=prev;
		prev=curr;
		curr=temp;
		prevmax=currmax;
		if(p<pilots/2) currmax=p+1;
		else currmax=pilots-p-1;
		for(a=(p+1)%2;a<=currmax;a+=2){
			curr[a]=2000000000;
			if((a>0)&&(prev[a-1]+assist[p]<curr[a])) curr[a]=prev[a-1]+assist[p];
			if((a<prevmax)&&prev[a+1]+captain[p]<curr[a])
				curr[a]=prev[a+1]+captain[p];
		}
	}
	printf("%d\n",curr[0] );
	return 0;
}