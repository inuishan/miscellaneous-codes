class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int size = digits.size();
        int flag=0;
        int i;
        for(i=size-1;i>=0;i--){
            if(digits[i]==9)
                {
                    digits[i]=0;
                }
            else{
            digits[i]=digits[i]+1;
            flag=1;
            break;
            }    
        }
        if(flag==0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};