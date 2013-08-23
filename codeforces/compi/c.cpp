#include<iostream>
#include<algorithm>
#include<string>
#include<math>
using namespace std;
int main(int argc, char const *argv[])
{	
	string x;
	cin>>x;
	int len = x.length();
	long long int range = pow(2,len);
	long long 
	for(long long int i=0;i<range;i++){

	}
	return 0;
}
string xor(string s1, string s2){
	int len = s1.length();
	string s3;
	strcpy(s3,s1);
	for(int i=0;i<len;i++){
		if(s1[i]==s2[i]){
			s3[i] = '0';
		}
		else s3[i] = '1';
	}
	return s3;

}
string add(string x1){
	string s;
	strcpy(s,x1);
	

}
// char addIndiBits()