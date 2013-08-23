#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<stack>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int c;
	vector<long long int > v;
	stack<long long int > s;
	cin>>c;
	long long int p=0;
	long long int n=0;

	while(n>=0){
		n=c-(2*p+1)*(p-1);
		
		double temp = (double)n/((double)(2*p+1));
		double ans = log2(temp);
		// cout<<ans<<" "<<p<<" "<<endl;
		if((ans-(long long int)ans)==0){
			// cout<<n<<endl;
			s.push(n);
		}
		
		p++;


	}
	if(s.size()==0)
	{
		cout<<-1<<endl;
		return 0;
	}
	while(s.size()){
		cout<<s.top()<<endl;
		s.pop();
	}

	return 0;
}