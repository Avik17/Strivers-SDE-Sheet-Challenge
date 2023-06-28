/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || k==0 )
       return head;
       if(head->next==NULL)
        return head;
        ListNode* curr=head;
        ListNode* tail=head;
        ListNode* prev=NULL;
    
        ListNode* forw=head->next;
        int len=1;
        while(curr->next!=NULL){
            curr=curr->next;
            len++;
        }
        tail=curr;
        int i=1;
        k=k%len;;
        if(k==0)
        return head;
        curr=head;
        while(i!=len-k && forw!=NULL){
            prev=curr;
            curr=forw;
            forw=forw->next;
            i++;
        }
        curr->next=NULL;
        tail->next=head;
        head=forw;
        return head;
    }
};