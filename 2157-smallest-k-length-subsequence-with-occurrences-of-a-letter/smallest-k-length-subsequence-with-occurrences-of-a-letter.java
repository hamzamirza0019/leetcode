class Solution {
    public String smallestSubsequence(String s, int k, char letter, int repetition) {
        if(s.length() == k) return s;
        Stack<Character> st = new Stack<>();
        StringBuilder str =  new StringBuilder();
        int count=0;

        for(char ch: s.toCharArray()){
            if(ch== letter) count++;
        }

        int del = count - repetition;

        for(int i=0; i<s.length() ; ++i){
            char ch = s.charAt(i);

           while (!st.isEmpty()
                    && st.peek() > ch
                    && (st.size() - 1 + (s.length() - i) >= k)) {

                if (st.peek() == letter) {
                    if (del > 0) {
                        st.pop();
                        del--;
                    } else break; // cannot remove required letter
                } else {
                    st.pop();
                }
            }

            st.push(ch);

        }
        int letterleft = repetition;
        int remaining = k ;
        for(Character ch: st){
            if(str.length() ==k ) break;

            if( ch == letter ){
                str.append(ch);
               remaining--;
               letterleft--; 
            }
            else{
                if(remaining > letterleft){
                    str.append(ch);
                    remaining--;
                }
            }

        }
        return str.toString();

        
    }
}