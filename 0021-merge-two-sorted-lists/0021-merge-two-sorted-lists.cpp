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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode* h1  =list1;
      ListNode* h2  =list2;
      ListNode* head  =NULL;
      if(h1==NULL && h2!=NULL)
      return h2;
      if(h2==NULL && h1!=NULL)
      return h1;
        if(h2==NULL && h1==NULL)
      return NULL;
     
       ListNode* prev=NULL;
        if(h1->val<=h2->val){
            head=h1;
            prev=h1;
            h1=h1->next;
          }
          else{ 
          head=h2;
          prev=h2;
          h2=h2->next;
          }
      while(h1!=NULL && h2!=NULL){
         
          if(h1->val<=h2->val){
               prev->next=h1;
               prev=h1;
               h1=h1->next;
               
          }
          else {
               prev->next=h2;
               prev=h2;
               h2=h2->next;
          }
      }
if(h1!=NULL)
prev->next=h1;
if(h2!=NULL)
prev->next=h2;
      

     
      return head;


    }
};