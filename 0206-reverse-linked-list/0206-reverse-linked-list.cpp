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
    ListNode* reverseList(ListNode* head) {
  if (head == nullptr || head->next == nullptr) 
    return head;      
int n=0;
ListNode *temp=head;
while(temp!=NULL){
temp=temp->next;    
n++;}
ListNode *a=head,*b=a->next,*c;
for(int i=0;i<n-1;i++){
 c=b->next;   
if(i==0)
a->next=NULL;
b->next=a;
a=b;
b=c;
}
head=a;
return head;
    }
};