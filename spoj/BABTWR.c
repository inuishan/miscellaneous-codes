#include<stdio.h>
typedef struct{
	int length;
	int width;
	int height;
}t_box;
int boxes;
t_box box[111];
int read_input(void){
	int b,x,y,z;
	scanf("%d",&b);
	if(!b) return 0;
	boxes = 0;
	while(b--){
		scanf("%d%d%d",&x,&y,&z);
		box[boxes++]=(x<y)?(t_box){x,y,z}:(t_box){y,x,z};
		box[boxes++]=(x<z)?(t_box){x,z,y}:(t_box){z,x,y};
		box[boxes++]=(y<z)?(t_box){y,z,x}:(t_box){z,y,x};

	}
	return 1;
}
int maxheight[111];
void init_search(void){
	int b;
	for(b=0;b<boxes;b++)
		maxheight[b]=0;
}

int find_maxheight(int b){
	int bb,h;
	int result;
	if(maxheight[b]) return maxheight[b];
	result=0;
	for(bb=0;bb<boxes;b++){
		//printf("%d\n",i++);
		if(box[bb].length>=box[b].length) continue;
		if(box[bb].width>=box[b].width) continue;
		if((h=find_maxheight(bb))>result) result=h;
	}
	return maxheight[b]=result+box[b].height;
}

int find_maxtower(void)
{
	int b,h,result=0;
	for(b=0;b<boxes;b++){
		//printf("%d\n",i++);
		if((h=find_maxheight(b))>result) result = h;
	}
//	printf("%s\n", "Bye Bye");
	return result;
}
int main()
{	
		
	/* code */
	while(read_input()){
		//printf("%s\n", "Input successfully read");
		init_search();
		//printf("%s\n", "Input successfully read");
		printf("%d\n",find_maxtower() );
	}
	return 0;
}