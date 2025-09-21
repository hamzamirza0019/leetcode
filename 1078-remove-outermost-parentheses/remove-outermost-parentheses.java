class Solution {
    public String removeOuterParentheses(String s) {
        Stack<Character> st = new Stack<>();
        StringBuilder sb = new StringBuilder();
        for(char ch : s.toCharArray()){
           if(ch =='('){
            if(st.size()>0){
                sb.append(ch);
            }
            st.push(ch);
           }
           else{
            st.pop();
            if(st.size()>0){
                sb.append(ch);
            }
           }
        }
        return sb.toString();


    }
}