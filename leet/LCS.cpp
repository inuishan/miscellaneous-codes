#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
    	int maxi = *max_element(num.begin(),num.end());
    	int mini = *min_element(num.begin(),num.end());
    	int *arr;
    	arr = new int[maxi];
    	for(int i=0;i<num.size();i++){
    		int temp = num[i];
    		arr[temp] = 1;
    	}
    	int count = 0, naya = 1;
    	int ans = 0;
    	for(int i=0;i<=maxi;i++)
    		{
    			if(arr[i]==0){
    				if(count>ans)
    					ans=count;
    				count = 0;
    				// naya = 1;
    			}
    			if(arr[i]==1){
    				count++;
    			}
    		}
       return ans; 
    }

};
int main(int argc, char const *argv[])
{
	Solution s;
	// std::vector<char> v;
	vector<int> v;
	v.push_back(1);
	v.push_back(10);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	s.longestConsecutive(v);
	return 0;
}