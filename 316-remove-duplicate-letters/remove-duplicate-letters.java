class Solution {
    public String removeDuplicateLetters(String s) {
        HashMap<Character, Integer> freq = new HashMap<>();
        HashSet<Character> inStack = new HashSet<>();
        Stack<Character> stack = new Stack<>();
        
        for (char ch : s.toCharArray()) {
            freq.put(ch, freq.getOrDefault(ch, 0) + 1);
        }

        for (char ch : s.toCharArray()) {
            freq.put(ch, freq.get(ch) - 1);

            if (inStack.contains(ch)) continue;

            while (!stack.isEmpty() && stack.peek() > ch && freq.get(stack.peek()) > 0) {
                inStack.remove(stack.pop());
            }

            stack.push(ch);
            inStack.add(ch);
        }

        StringBuilder sb = new StringBuilder();
        while (!stack.isEmpty()) {
            sb.append(stack.pop());
        }

        return sb.reverse().toString();
    }
}
