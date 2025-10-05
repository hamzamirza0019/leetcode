class Pair {
    int key;
    int value;
    Pair(int key, int value) {
        this.key = key;
        this.value = value;
    }
}
class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] arr =new int[n];
        Stack<Pair> st = new Stack<>();
        for(int i=n-1; i>=0; --i){
            while(st.size()>0 && st.peek().key <= temperatures[i]){
                int val  = st.pop().value;
                if(st.size()>0) st.peek().value+=val;
            }

            if(st.size()>0) arr[i] = st.peek().value;
            else arr[i] =0;
            Pair p = new Pair(temperatures[i], 1);
            st.push(p);

        }

        return arr;
        

    }
}