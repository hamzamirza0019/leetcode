import java.util.Stack;
class Solution {
    public String makeGood(String s) {
        StringBuilder sb = new StringBuilder();
        Stack<Character> st = new Stack<>();
        for(char ch: s.toCharArray()){
            if(!st.isEmpty() && Math.abs(st.peek() - ch) ==32){
                st.pop();
            }
            else{
                st.push(ch);
                // sb.append(ch);
            }
        }
        for(char ch: st){
            sb.append(ch);
        }

        return sb.toString();
    }
}