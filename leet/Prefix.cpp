class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (strs.empty()) return "";
        string first = *strs.begin();
        string to_ret;
        char *ret = (char *)malloc(200*sizeof(char));
        int *lengths;
        lengths= new int[strs.size()];
        vector<string>::iterator it;
        int i=0;
        int flag=0;
        for(it=strs.begin();it!=strs.end();it++)
        {
            lengths[i++] = (*it).length();
            
        }
        i=0;
        while(i<lengths[0]){
            for(int j=1;j<strs.size();j++)
            {
                if(i>=lengths[j]||first[i]!=strs[j][i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
           // to_ret[i] = first[i];
            i++;
        }
        //to_ret[i]='\0';
        return first.substr(0,i);
        
        
    }
};