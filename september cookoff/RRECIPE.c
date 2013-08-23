#include<stdio.h>
#include<stdlib.h>
#include<string.h>	
int main()
{
	int t;
	scanf("%d",&t);
	char str[1000000];
	while(t--)
	{
		
		gets(str);
		char *ptr1,*ptr2;
		int l=strlen(str);
		ptr1=str;
		ptr2=str+l-1;
		//printf("%c\n %c",*ptr1,*ptr2 );
		int i=0,j=l-1,ispalin=1;
		long long ans=1;
		while(i<=j)
		{
			if((str[i]!='?'&&str[j]!='?')&&(str[i]!=str[j]))
			{
				ans=0;
				ispalin=0;
				break;
			}
			if(str[i]=='?'&&str[j]=='?')
			{
				ans=ans*26;
				i++;
				j--;
				continue;
	
			}
			/*if(str[i]=='?'||str[j]=='?')
			{
				ans=ans+1;
				i++;
				j--;
				continue;	
			}*/
			i++;
			j--;
		}
		ans=ans%10000009;
		if(ispalin&&ans==0)
			ans=1;
		printf("%lld\n",ans );
		
	}
	return 0;

}