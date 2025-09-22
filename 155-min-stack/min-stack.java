import java.util.*;
class MinStack {
    Stack<Integer> st;
    Stack<Integer> mins;
    public MinStack() {
        st = new Stack<>();
        mins = new Stack<>();
    }
    
    public void push(int val) {
        st.push(val);
        if (mins.isEmpty()) {
            mins.push(val);
        } else {
            mins.push(Math.min(val, mins.peek())); 
    }

    }
    
    public void pop() {
        st.pop();
        mins.pop();
        
    }
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        return mins.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */