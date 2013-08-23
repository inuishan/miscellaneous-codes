/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<ListNode *> curr;
        //if(lists.size()==0)
        //return NULL;
        ListNode *insert;
        
        for(int i=0;i<lists.size();i++){
            curr.push_back(lists[i]);
        }
        
        ListNode * head = NULL;
        
        while(true){
            
            int index=-1,flag=0;
            ListNode * toAdd;
            int min = INT_MAX;
            for(int i=0;i<lists.size();i++){
                if(curr[i]!=NULL){
                    flag=1;
                if(curr[i]->val<=min)
                {
                    toAdd = curr[i];
                    min = toAdd->val;
                    index = i;
                }
                }
            }
           
            if(flag==0)
            break;
            if(head==NULL){
            if(index!=-1)
            if(curr[index]!=NULL)
            head = curr[index];
            insert = head;
            }
            else{
                if(index!=-1){
                insert->next = curr[index];
                insert = insert->next;
                }
            }
            curr[index]=curr[index]->next;
            
            
            
        }
        return head;
        
    }
    
};