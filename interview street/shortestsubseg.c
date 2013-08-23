#include<stdio.h>
int readString(char x[][15])
{
char ch;
int i=0,j=0;
do{
	scanf("%c",&ch);
	ch=tolower(ch);
	if(ch>=97&&ch<=122)
	{
		x[i][j++]=ch;

	}
	else if(ch==' ')
		{
			x[i][j++]='\0';
			i++;
			j=0;

			continue;
		}
  }while(ch!='\n');
  return i+1;

}
int main()
{

	char p[200000][15];

	int t;
	int i=readString(p);
	printf("%d\n",i );
	for(t=0;t<i;t++)
		printf("%s\n",p[i][0]);
	return 0;
}