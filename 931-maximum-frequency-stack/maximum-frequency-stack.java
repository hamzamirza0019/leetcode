import java.util.*;
class FreqStack {
    HashMap<Integer, Stack<Integer>> sm;
    HashMap<Integer, Integer> fm;
    public FreqStack() {
        sm = new HashMap<>();
        fm = new HashMap<>();
    }
    
    public void push(int val) {
        fm.put(val, fm.getOrDefault(val,0) +1);
        int freq = fm.get(val);
        if(!sm.containsKey(freq)){
            Stack<Integer> temp = new Stack<>();
            sm.put(freq, temp);
        }
        sm.get(freq).push(val);
    }
    
    public int pop() {
        if(sm.size()==0) return -1;
        int size = sm.size();
        int elem = sm.get(size).peek();
        sm.get(size).pop();
        if (sm.get(size).size() == 0) sm.remove(size);
        fm.put(elem, fm.get(elem) -1 );
        if(fm.get(elem) == 0) fm.remove(elem);
        return elem;
    }
}

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack obj = new FreqStack();
 * obj.push(val);
 * int param_2 = obj.pop();
 */