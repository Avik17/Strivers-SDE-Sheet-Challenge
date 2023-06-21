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
    bool isPalindrome(ListNode* head) {
        ListNode*tail=head;
        ListNode*prev=NULL;
        ListNode*curr=NULL;
        ListNode*forw=NULL;

    if(head->next==NULL)
    return true;
    int cnt=0;
while(tail!=NULL){
    cnt++;
    tail=tail->next;
}
tail=head;
cnt=cnt/2;
int cnt1=0;
        while(cnt!=cnt1){
           tail=tail->next;
           cnt1++;
        }
        curr=tail;
        forw=curr->next;
        
        
        
        while(forw!=NULL){
            curr->next=prev;
            prev=curr;
            curr=forw;
            forw=forw->next;
        }
        curr->next=prev;
        tail=curr;
        curr=head;
        while(tail!=NULL && curr!=NULL){
            if(tail->val!=curr->val)
            return false;
            tail=tail->next;
            curr=curr->next;
        }
        return true;
    }
};