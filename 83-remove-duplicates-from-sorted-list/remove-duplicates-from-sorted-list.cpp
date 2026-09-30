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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* t=head;
        unordered_set<int>us;
        ListNode* prev = head;
        us.insert(t->val);
        t= t->next;
        while( t!=nullptr ){
            if(us.find(t->val)!= us.end() ){
                ListNode* temp = t;
                t = t->next;
                prev->next = t;
                delete temp;
            }else{
                us.insert(t->val);
                prev = t;
            t = t->next;
            }
        }
        return head;
        
    }
};