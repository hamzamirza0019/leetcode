import java.util.Stack;
class Solution {
    public String removeDuplicates(String s) {
        Stack <Character> st = new Stack<>();
        int i=s.length()-1;
        while(i>=0){
            if(st.size() ==0 || st.peek()!=s.charAt(i)){
                st.push(s.charAt(i));
            }
            else{
                st.pop();
            }

            i--;
        }
        StringBuilder str=new StringBuilder();
        while(st.size()>0){
            str.append(st.peek());
            st.pop();
        }

        return str.toString();

    }

}