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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tail=head;
         ListNode* tail_1=NULL;
        int cnt=0;
        while(tail->next!=NULL){
            tail_1=tail;
            tail=tail->next;
            cnt++;
        }
        cnt++;
          if(cnt==1)
        return NULL;
        if(n==1)
        {
            tail_1->next=NULL;
            return head;
        }
      
        if(cnt==n){
        head=head->next;
        return head;
        }
        int n1=cnt-n;
        cnt=0;
        tail=head;
      
        while(cnt<n1){
            tail=tail->next;
            cnt++;
         }
       
        tail->val=tail->next->val;
            tail->next=tail->next->next;
            

        return head;

    }
};