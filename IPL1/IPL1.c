/*
 * IPL1.c
 *
 *  Created on: 01-Oct-2012
 *      Author: ishan
 */


#include<stdio.h>
float ans[10][120][300]={0};
float recursion(int balls, int reqRuns, int wickets);
int readScore(void);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(ans,0,sizeof(ans));
		float overs;
		int myruns,wickets,target;
		scanf("%f",&overs);
		myruns=readScore();
		scanf("%d",&wickets);
		//printf("%d %d\n",myruns,wickets );
		scanf("%d",&target);
		//printf("%d %d %d\n",myruns,wickets,target);
		if(myruns>=target)
		{
			printf("%s\n","100.00");
			continue;
		}
		else if(wickets>=10)
		{
			printf("%s\n", "0.00");
			continue;
		}
		//printf("overs = %f\n", overs);
		int ov = (int) overs;
		int ball = (int)(overs*10)%10;
		int totballs = 6*ov+ball;
		//printf("%d %d\n",ov,ball );
		//printf("%d %d %d\n",totballs, target- myruns,wickets );
		float finalAns = recursion(totballs,target-myruns, wickets)*100;
		printf("%.2f\n",finalAns);

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
float recursion(int balls, int reqRuns, int wickets)
{
	if (reqRuns<=0)
		return 1;
	if (balls==120||wickets==10)
		return 0;
if(ans[wickets][balls][reqRuns]!=0)
	return ans[wickets][balls][reqRuns];

ans[wickets][balls][reqRuns] = (recursion(balls+1, reqRuns,wickets)+recursion(balls+1, reqRuns-1,wickets)+
recursion(balls+1, reqRuns-2,wickets)+recursion(balls+1, reqRuns-3,wickets)+
recursion(balls+1, reqRuns-4,wickets)+recursion(balls+1, reqRuns-5,wickets)+
recursion(balls+1, reqRuns-6,wickets)+recursion(balls+1, reqRuns,wickets+1)+
2*recursion(balls, reqRuns-1,wickets))/10;
return ans[wickets][balls][reqRuns];

}
