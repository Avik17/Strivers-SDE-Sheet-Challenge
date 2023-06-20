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
    void deleteNode(ListNode* node) {
        ListNode* curr=node;
        ListNode* forw=curr->next;
        while(forw!=NULL){
            swap(curr->val,forw->val);
            if(forw->next==NULL)
            curr->next=NULL;
            //increment pointer
            curr=forw;
            forw=forw->next;
        
        }
        
        
    }
};