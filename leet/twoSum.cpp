#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
vector<int> twoSum(vector<int> &numbers, int target);
int main(int argc, char const *argv[])
{
    std::vector<int> v;
    v.push_back(5);
    v.push_back(75);
    v.push_back(25);
    twoSum(v,100);
    return 0;
}

vector<int> twoSum(vector<int> &numbers, int target) {
    // Start typing your C/C++ solution below
    // DO NOT write int main() function
    vector<int> x;
    cout<<"Hello";
    // cout<<numbers.size();
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<numbers.size();i++){
        int a = numbers[i];
        if(binary_search(numbers.begin(),numbers.end(),a-target))
            {
                x.push_back(a);
                // cout<<a;
                x.push_back(a-target);
                break;
            }
    }
    return x;
    
}