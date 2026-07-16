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
    int pairSum(ListNode* head) {
        vector<int> el;
        int max=0;
        ListNode *f=head,*s=head,*p=s;
        while(f!=nullptr){
            p=s;
            el.push_back(p->val);
            s=s->next;
            f=f->next->next;
        }
        while(p->next!=nullptr){
            p=p->next;
            if((el.back()+(p->val))>max)
            max=(el.back()+(p->val));
            el.pop_back();
        }
        return max;
    }
};