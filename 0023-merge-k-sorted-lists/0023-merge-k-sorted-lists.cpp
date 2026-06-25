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
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        for(auto itt:lists){
            ListNode*temp = itt;
            while(temp!=NULL){
                pq.push({temp->val,temp});
                temp=temp->next;
            }
        }
        ListNode dummy(0);
        ListNode*head=&dummy;
        while(!pq.empty()){
            head->next=pq.top().second;
            head=head->next;
            pq.pop();
        }
        head->next=NULL;
        return dummy.next;
    }
};