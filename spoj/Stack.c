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
int i=1;
	while(t--)
	{	
		
	memset(ans,-1,sizeof(ans));
	float overs;
	int myruns,wickets,target;
	scanf("%f",&overs);
	myruns=readScore();
	scanf("%d",&wickets);
	
	scanf("%d",&target);
	int xxxx;
	scanf("%d",&xxxx);
	
	if(myruns>=target)
		{
		
		printf("%d ",i );
		i++;
		printf("%s\n","Yes" );
		continue;
		}
	else if(wickets>=10)
		{
		printf("%d ",i );
		i++;
		
		 printf("%s\n","No" );
		continue;
		}

	int ov = (int) overs;
	int ball = (int)(overs*10)%10;
	int totballs = 6*ov+ball;

	double finalAns = recursion(totballs,target-myruns, wickets)*100;
	if(finalAns>xxxx)
		{	
		printf("%d ",i );
		i++;
		printf("%s\n","Yes");
		
		}
	else 
		{
		printf("%d ",i );
		i++;
		printf("%s\n","No");
		}
	

	}
return 0;
}
int readScore()
{
char ch;
int ans2=0;
ch = getchar();

while(ch!='/')
	{
	ch=getchar();

	if(ch!='/')
	ans2 = ans2*10 + ch-'0';

	}

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
