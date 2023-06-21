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
    bool hasCycle(ListNode *head) {
       if(head==NULL)
        return false; 
        if(head->next==NULL)
        return false;
        ListNode* slow=head;
        ListNode* fast=head;
        
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;

        while(slow!=fast){
            if(fast==NULL)
            return false;
            if(fast->next==NULL|| fast->next->next==NULL)
            return false;
            slow=slow->next;
            fast=fast->next;
            fast=fast->next;

        }
        return true;
        
    }
};