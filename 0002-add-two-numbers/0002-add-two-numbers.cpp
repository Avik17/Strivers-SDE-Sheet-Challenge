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
      void insertNode(ListNode* &head,int val) {
    ListNode* newNode = new ListNode(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}
public:
    ListNode* addTwoNumbers(ListNode* h1, ListNode* h2) {
        // ListNode* h1=reverseList(l1);
        // ListNode* h2=reverseList(l2);
        bool carry_done=false;
        int carry=0;
        int val=0;
        ListNode* ans=NULL;
       
       
        
        while(h1!=NULL || h2!=NULL){
          
           if(h1==NULL){
              val=h2->val+carry;
              carry_done=true;
              h2=h2->next;
               carry=0;
           }
           else  if(h2==NULL){
              val=h1->val+carry;
              carry_done=true;
              h1=h1->next;
               carry=0;
             
           }
          else  
            {
              val=h1->val+h2->val+carry;
           carry_done=true;
            h1=h1->next;
            h2=h2->next;
            carry=0;
            }
             if(val>=10)
            {
            carry=val/10;
            val=val%10;
            carry_done=false;
            
            }
            
            insertNode(ans,val);
            if(h1==NULL && h2==NULL && carry!=0 && !carry_done )
             {  
               
               insertNode(ans, carry);
             }
            
        }
      
        return ans;
    }




  
    ListNode* reverseList(ListNode* head) {
        
    if(head==NULL || head->next==NULL)
      return head; 
 
    ListNode* prev=head;
    ListNode* curr=head->next;
      ListNode* temp=curr->next;
    while(temp!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=temp;
        temp=temp->next;
        
    }
    curr->next=prev;
    head->next=NULL;
    head=curr;
 return head;
    }

};