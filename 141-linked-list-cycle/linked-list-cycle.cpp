/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>us;
        ListNode* t = head;
        while( t!=nullptr ){
            if( us.find(t) != us.end() ) return true;
            us.insert(t);
            t= t->next;
        }

        return false;
    }
};