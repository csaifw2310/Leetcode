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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>p;
        
        for(int i=0;i<lists.size();i++){
           if(lists[i]!=nullptr){
             p.push({lists[i]->val,lists[i]});
           }
        }
            ListNode *dummy = new ListNode(-1);
            ListNode *temp = dummy;
        while(!p.empty()){
            auto x = p.top();
            p.pop();
            if(x.second->next){
                p.push({x.second->next->val,x.second->next});
            }
            temp->next = x.second;
            temp=temp->next;
        }
        return dummy->next;
    }
};