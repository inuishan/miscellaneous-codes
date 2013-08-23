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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int>> ret;
        if(root==NULL)
        return ret;
        stack<TreeNode *> s1;
        stack<TreeNode *> s2;
        s1.push(root);
        while(true){
            vector<int> to_add;
            if(s1.empty()&&s2.empty())
                break;
            while(!s1.empty()){
                TreeNode *temp = s1.pop();
                to_add.push_back(temp->val);
                if(temp->right!=NULL)
                s2.push(temp->right);
                if(temp->left!=NULL)
                s2.push(temp->left);
            }
            while(!s2.empty()){
                TreeNode *temp = s2.pop();
                to_add.push_back(temp->val);
                if(temp->left!=NULL)
                s1.push(temp->left);
                 if(temp->right!=NULL)
                s1.push(temp->right);
            }
            ret.push_back(to_add);
        }
        
        
        return ret;
    }
};