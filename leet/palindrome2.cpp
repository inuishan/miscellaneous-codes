#include<string>
#include<iostream>
#include<cstring>
using namespace std;
class Solution {
public:
    int a[100][100] = {{-1}};
    int minCut(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        memset(a,-1,sizeof(a));
        int i=0;
        // cout<<a[0][10]<<endl;
        int j = s.length();
        // cout<<j;
        cout<<minCut_func(0,j-1,s,s.length());
        
    }
    int minCut_func(int i,int j, string s, int len){
       // cout<<"sjdksjdksdj";
        // cout<<i<<" "<<j<<endl;
        if(j<0)
            return 0;
        if(i>=s.length())
        return 0;
    	 // cout<<i<<" "<<j<<endl;
        if(i>j){
            return 0;
        }
    	if(i==j){
    		// cout<<"Yup";
    		a[i][j]=0;
    		return 0;
    	}
        if(a[i][j]!=-1){
            // cout<<"Hi";
            // cout<<i<<" "<<j<<endl;
            // cout<<a[i][j];
            return a[i][j];
        }
        // cout<<"Before Palin\n";
        // cout<<s<<" "<<i<<" "<<j;
    	if(isPalindrome(s.substr(i,j-i+1))){


    		a[i][j] = 0;
    		return a[i][j];
    	}
        // cout<<"After Palin\n";
        // cout<<s<<" "<<i<<" "<<j;
        // a[i][j] = 1+min(minCut_func(i+1,j,s.substr(i+1,j),len),minCut_func(i,j-1,s.substr(i,j-1),len));
        
    	a[i][j] = 1+min(minCut_func(i+1,j,s,len),minCut_func(i,j-1,s,len));
    	return a[i][j];

    }
    bool isPalindrome(string s){
    	// cout<<"Inside palin"<<" "<<s<<endl;
    	int i=0;
    	int j=s.length()-1;
        // cout<<"In palin"<<s.length()<<endl;
    	while(i<=j){
            // cout<<"asdfasdf";
            // cout<<i<<" "<<j<<endl;
    		if(s[i]!=s[j]){
    			// cout<<"i="<<i<<" "<<j<<endl;
                // cout<<"Returning";
    			return false;
    		}
            i++;
            j--;
    	}
    	// cout<<"Palindrome";
    	return true;
    }
};
int main(int argc, char const *argv[])
{
	Solution s;
    // cout<<s.isPalindrome("abaaba");
	s.minCut("cabababcbc");
	return 0;
}