class Solution {
    public String removeKdigits(String num, int k) {
        if(num.length() ==k) return "0";
        StringBuilder str = new StringBuilder("0");
        Stack<Character> st = new Stack<>();

        for(char ch : num.toCharArray()){
            while(st.size()>0 && st.peek()>ch && k>0){
                st.pop();
                k--;
            }
            
            st.push(ch);
        }
        
        while(k>0){
            st.pop();
            k--;
        }

        for(char ch: st){
            str.append(ch);
        }

        while(str.length()>0 && str.charAt(0)== '0') str.deleteCharAt(0); 

        return str.length()==0 ? "0" : str.toString();
    }
}