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
    ListNode* removeElements(ListNode* head, int val) {
        
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;   
        }
        ListNode *t = head;
        while(t!= nullptr && t->next!= nullptr){
            if(t ->next-> val == val){
                ListNode *temp = t->next;
                t->next = t->next->next;
                delete temp;
            }
            else{
                t = t->next;
            }
        }

        return head;
        
    }
};