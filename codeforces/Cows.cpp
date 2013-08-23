#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	cin>>t;
	int ans[200000];
	int sum = 0;
	int no_of_ele = 1;
	while(t--){
		int top;
		cin>>top;
		if(top==1){
			int a,x;
			cin>>a>>x;
			for(int i=0;i<x;i++){
				ans[i]+=a;
			}
			sum+=a*x;
			printf("%.6f\n",(double)sum/no_of_ele);
			cout<<"after\n";
			for(int k=0;k<no_of_ele;k++){
				cout<<ans[k]<<"    ";

			}
		}
		else if(top==2){
			int x;
			cin>>x;
			sum+=x;
			no_of_ele+=1;
				printf("%.6f\n",(double)sum/no_of_ele);
			// cout<<(double)sum/no_of_ele<<endl;
			ans[no_of_ele-1] = x;
			cout<<"after\n";
			for(int k=0;k<no_of_ele;k++){
				cout<<ans[k]<<"    ";

			}


		}
		else if(top==3){
			cout<<"Before\n";
			for(int k=0;k<no_of_ele;k++){
				cout<<ans[k]<<"    ";

			}

			sum-=ans[no_of_ele-1];
			no_of_ele-=1;
			printf("%.6f\n",(double)sum/no_of_ele);
			// cout<<(double)sum/no_of_ele<<endl;
			cout<<"after\n";
			for(int k=0;k<no_of_ele;k++){
				cout<<ans[k]<<"    ";

			}

		}
	}
}