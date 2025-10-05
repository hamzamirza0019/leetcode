// import java.util.*;

class Pair {
    int temp;   
    int index;  

    Pair(int temp, int index) {
        this.temp = temp;
        this.index = index;
    }
}

class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] result = new int[n];
        Stack<Pair> st = new Stack<>();

        for (int i = 0; i < n; i++) {

            while (!st.isEmpty() && temperatures[i] > st.peek().temp) {
                Pair pair = st.pop();
                result[pair.index] = i - pair.index; 
            }


            st.push(new Pair(temperatures[i], i));
        }

        return result;
    }
}
