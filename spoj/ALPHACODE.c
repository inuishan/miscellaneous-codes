#include<stdio.h>
#include<string.h>
int main()
{
	char str[5001];
	while(1)
	{
		long ans[5001]={0};
		gets(str);
		int l=strlen(str);
		int i= l-2;
		ans[l-1]=1;
		while(i>=0)
		{
			if(str[i]<='2'&&str[i+1]<='6')
				ans[i]=1+ans[i+1]+ans[i+2];
			else ans[i]=ans[i+1];
			i--;
		}
		printf("%ld\n",ans[0]);
		//printf("%ld\n",ans[0]+ans[1]);

	}
	return 0;
}