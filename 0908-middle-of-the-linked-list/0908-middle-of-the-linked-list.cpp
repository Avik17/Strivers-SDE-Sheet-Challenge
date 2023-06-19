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
    ListNode* middleNode(ListNode* head) {
         ListNode* temp=head;
    int count=1;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    if(count%2!=0)
        count=(count/2)+1;
    else count=count/2;
    int cnt=1;
    temp=head;
    while(cnt!=count){
        temp=temp->next;
        cnt++;
    }
    return temp;
        
    }
};