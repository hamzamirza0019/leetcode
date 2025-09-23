class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> sm = new HashMap<>();
        Stack<Integer> st = new Stack<>();
        ArrayList<Integer> ans = new ArrayList<>();
        
        for(int i=nums2.length-1; i>=0; --i){
            while(st.size()>0 && st.peek()<= nums2[i]){
                st.pop();
            }
            if(st.size() > 0 ){
                ans.add(st.peek());
            }
            else{
                ans.add(-1);
            }
            st.push(nums2[i]);
        }
        
        
        Collections.reverse(ans);
        for(int i=0; i<nums2.length; ++i){
            sm.put(nums2[i], ans.get(i));
        }
        int[] res = new int[nums1.length];
        for(int i=0 ; i<nums1.length; ++i){
            res[i] = sm.get(nums1[i]);
        }

        return res;

    }
}