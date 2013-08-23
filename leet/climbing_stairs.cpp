class Solution {
public:
    int climbStairs(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(n==0)
        return 0;
        return rec(n);
    }
    int rec(int k){
        if(k==0)
        return 1;
        if(k==1)
        return 1;
        
        else return rec(k-1)+rec(k-2);
    }
};