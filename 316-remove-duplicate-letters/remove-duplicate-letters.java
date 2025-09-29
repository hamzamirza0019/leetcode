class Solution {
    public String removeDuplicateLetters(String s) {
        HashMap< Character, Integer> hm = new HashMap<>();
        HashSet<Character> hs = new HashSet<>();
        Stack<Character> st = new Stack<>();
        
        for(char ch : s.toCharArray() ){
            hm.put(ch, hm.getOrDefault(ch, 0) +1);
        }

        for( int i=0; i<s.length(); ++i ){
            char ch = s.charAt(i);
            if(hs.contains(ch)){
                hm.put(ch, hm.get(ch) - 1);

            }
            else{
            while( !st.isEmpty() && st.peek()>ch && hm.get(st.peek() )>0){
                hs.remove(st.peek());
                st.pop();
            }

            st.push(ch);
            hs.add(ch);
            hm.put(ch, hm.get(ch) - 1);
            }


        }
        StringBuilder str = new StringBuilder();
        while( !st.isEmpty() ){
            str.append(st.pop());
        }

        return str.reverse().toString();

        
    }
}