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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL ||head->next==NULL) return head;
        ListNode*pre=head;
        ListNode*curr=head->next;
         pre->next=curr->next;
         curr->next=pre;
         head=curr;
         ListNode*pretail=pre;
         pre=pre->next;
         while(pre&&pre->next){
            curr=pre->next;
        //swapping
         pre->next=curr->next;
         curr->next=pre;
         pretail->next=curr;

         pretail=pre;
         pre=pre->next;
         }
        return head;
    }
};