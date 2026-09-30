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
    ListNode* midNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while( fast!=nullptr ){
            if( fast->next==nullptr || fast->next->next==nullptr ){
                return slow;
            }
            slow= slow->next;
            fast = fast->next->next;
        }
        return head;
    }

    ListNode* reverse( ListNode* head ){
        ListNode* rh = nullptr;
        while(head!=nullptr){
            ListNode* t = head;
            head= head->next;
            t->next =  rh;
            rh =t;
        }
        return rh;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* t = head;
        ListNode* mid = midNode(head);
        ListNode* rh = reverse(mid->next);
        mid->next = nullptr;
        while( t!=nullptr && rh!=nullptr ){
            if( t->val != rh->val ) return false;
            t = t->next;
            rh = rh->next;
        }
        return true;
    }
};