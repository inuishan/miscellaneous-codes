	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	double ans[10][120][300]={0};
	double recursion(int balls, int reqRuns, int wickets);
	int readScore(void);
	int main()
	{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{	
			
		memset(ans,-1,sizeof(ans));
		float overs;
		int myruns,wickets,target;
		scanf("%f",&overs);
		myruns=readScore();
		scanf("%d",&wickets);
		//printf("%d %d\n",myruns,wickets );
		scanf("%d",&target);
		int xxxx;
		scanf("%d",&xxxx);
		//printf("%d %d %d\n",myruns,wickets,target);
		if(myruns>=target)
		{
			// printf("%s\n","100.00");
			// printf("%d ",i );
			// i++;
			printf("%s\n","Yes" );
			continue;
		}
		else if(wickets>=10)
		{
			// printf("%d ",i );
			// i++;
			// printf("%s\n", "0.00");
			 printf("%s\n","No" );
			continue;
		}
	
		int ov = (int) overs;
		int ball = (int)(overs*10)%10;
		int totballs = 6*ov+ball;
	
		double finalAns = recursion(totballs,target-myruns, wickets)*100;
		if(finalAns>xxxx)
		{	
			printf("%s\n","Yes");
			
		}
		else {
			
			printf("%s\n","No");
	}
		// double finalAns2 = finalAns*100;
		// int finalAns3 = (int)finalAns2;
		// double finalAns4 = (float)finalAns3/100;
		// printf("%.2f\n", finalAns4);
		//printf("0 %f 2 %f 3 %d\n",finalAns,finalAns2,finalAns3 );
		// if(finalAns>=20)
		// 	printf("%s\n","Yes");
		// else printf("%s\n","No");
		
		// char temp[1000]={0};
		// sprintf(temp,"%0.30f",finalAns);
		// temp[999]='\0';
		// int k=0;
		// while(temp[k]!='\0')
		// {
		// 	if(temp[k]=='.')
		// 		break;
		// 	putchar(temp[k++]);
		// }
		// putchar(temp[k++]);
		// putchar(temp[k++]);
		// putchar(temp[k++]);
		// printf("\n");
		// printf("%.2f\n",finalAns);

	}
		return 0;
	}
	int readScore()
	{
	char ch;
	int ans2=0;
	ch = getchar();
	//ch = getchar();
	//ans = ans*10 + ch-'0';
	//printf("sadasdas %d\n",ch );
	while(ch!='/')
	{
		ch=getchar();
		//printf(" ch = %d\n", ch-'0');
		if(ch!='/')
		ans2 = ans2*10 + ch-'0';

	}
	//printf("%d\n",ans );
	return ans2;
	}
	double recursion(int balls, int reqRuns, int wickets)
	{
		if (reqRuns<=0)
			return 1;
		if (balls==120||wickets==10)
			return 0;
	if((int)ans[wickets][balls][reqRuns]>=0)
		return ans[wickets][balls][reqRuns];

	ans[wickets][balls][reqRuns] = (recursion(balls+1, reqRuns,wickets)+recursion(balls+1, reqRuns-1,wickets)+
	recursion(balls+1, reqRuns-2,wickets)+recursion(balls+1, reqRuns-3,wickets)+
	recursion(balls+1, reqRuns-4,wickets)+recursion(balls+1, reqRuns-5,wickets)+
	recursion(balls+1, reqRuns-6,wickets)+recursion(balls+1, reqRuns,wickets+1)+
	2*recursion(balls, reqRuns-1,wickets))/10;
	return ans[wickets][balls][reqRuns];

	}
