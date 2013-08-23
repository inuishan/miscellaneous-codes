#include<iostream>
#include<cstdio>
using namespace std;
int modu(int a,int b,int c);
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;
	int min=a;
	if(b<min && b<=c){
		min = b;

	}
	if(c<min && c<=a){
		min = c;
	}

	int p=a,q=b,r=c;
	p-=min;
	q-=min;
	r-=min;
	int ans1 = min+p/3+q/3+r/3;
	int ans2 = modu(a,b,c);
	// cout<<ans1<<" ";
	// cout<<ans2;
	if(ans1>ans2)
		cout<<ans1<<endl;
	else
		cout<<ans2<<endl;
	return 0;

}
int modu(int a,int b,int c){
	int ans=0;
	// if(!(a==0||b==0||c==0))
	// if(a!=0)
	// 	ans+=a/3;
	// if(b!=0)
	// 	ans+=b/3;
	// if()
	ans+=(a/3+b/3+c/3);
	a%=3;
	b%=3;
	c%=3;
	int min=a;
	if(b<min && b<=c){
		min = b;

	}
	if(c<min && c<=a){
		min = c;
	}
	ans+=min;
	return ans;
}

