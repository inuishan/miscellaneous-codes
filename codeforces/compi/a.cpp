#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	// int x;
	// cin>>x;
	// string s = to_string(x);
	// cout<<s;
	string s;
	cin>>s;
	int flag = 0;
	// cout<<s[0];
	for(int i=0;i<s.length();i++){
		if(s[i]!='1'&&s[i]!='4'){
			cout<<"NO"<<endl;
			flag = 1;
			break;
		}
		else{
			if(s[i]=='4'){
				if(i-1>=0 && s[i-1]=='1'){
					continue;
				}
				else if(i-2>=0 && s[i-2]=='4'){
					continue;
				}
				else{
					cout<<"NO"<<endl;
					flag = 1;
					break;
				}
			}
		}

	}
	if(flag==0){
		cout<<"YES"<<endl;
	}

	return 0;
}