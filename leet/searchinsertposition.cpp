class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        return bs(A,0,n-1,target);
        
    }
    int bs(int A[], int low, int high,int target)
    {
        int mid = (low+high)/2;
        if(A[mid]==target)
        return mid;
        if(low<=high){
        if(A[low]>target){
            if(low==0)
            return 0;
        return low-1;
        }
        else return high+1;
        }
        if(A[mid]<target)
        return bs(A,mid+1,high,target);
        return bs(A,low,mid-1,target); 
    }
};