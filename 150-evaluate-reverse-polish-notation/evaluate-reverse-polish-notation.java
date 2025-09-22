import java.util.Stack;
class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st = new Stack<>();
        for(String str: tokens){
            if(str.equals("+") ){
                int b = st.pop();
                int a = st.pop();
                st.push (b + a);
            }
            else if(str.equals("-")){
                int b = st.pop();
                int a = st.pop();
                st.push(a - b);
            }
            else if(str.equals("*")){
                int b = st.pop();
                int a = st.pop();
                st.push(a * b);
            }
            else if(str.equals("/")){
                int b = st.pop();
                int a = st.pop();
                st.push(a / b);
            }

            else{
                st.push(Integer.parseInt(str));
            }
        }

        return st.peek();


    }
}