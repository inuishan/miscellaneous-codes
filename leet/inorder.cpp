/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        queue<TreeNode *> q1;
        queue<TreeNode *> q2;
        vector<vector<int>> ret;
        if(root==NULL)
        return ret;
        q1.push(root);
        while(true){
            if(q1.empty()&&q2.empty())
            return ret;
        vector<int> temp1;    
        while(!q1.empty()){
            TreeNode *temp = q1.front();
            q1.pop();
            temp1.push_back(temp->val);
            if(temp->left!=NULL)
            q2.push(temp->left);
            if(temp->right!=NULL)
            q2.push(temp->right);
            
        }
        if(temp1.size()>=1)
        ret.push_back(temp1);
          vector<int> temp2;    
        while(!q2.empty()){
            TreeNode *temp = q2.front();
            q2.pop();
            temp2.push_back(temp->val);
            if(temp->left!=NULL)
            q1.push(temp->left);
            if(temp->right!=NULL)
            q1.push(temp->right);
            
        }
        if(temp2.size()>=1)
        ret.push_back(temp2);
        
        }
        return ret;
        
        
    }
};