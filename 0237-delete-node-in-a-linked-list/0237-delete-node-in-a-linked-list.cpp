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
        
            swap(curr->val,forw->val);
           
            //increment pointer
            curr->next=forw->next;
           
        
        
        
        
    }
};