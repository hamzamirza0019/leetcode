/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[] nextLargerNodes(ListNode head) {
         List<Integer> list = new ArrayList<>();
        while (head != null) {
            list.add(head.val);
            head = head.next;
        }
        int n = list.size();

        int[] arr = new int[n];
        Stack<Integer> st = new Stack<>();

        for(int i=n-1; i>=0; --i){
            while(st.size()>0 && st.peek() <= list.get(i)){
                st.pop();
            }
            if(st.size() >0 ) arr[i] = st.peek();
            else arr[i] =0;
            st.push(list.get(i));
        }

        return arr;
    }
}