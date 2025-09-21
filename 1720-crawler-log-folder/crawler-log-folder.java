class Solution {
    public int minOperations(String[] logs) {
        int count=0;
        for(String s: logs){
            if("../".equals(s) ){
                if(count>0)count--;
            }
            else if("./".equals(s)){

            }
            else{
                count++;
            }
        }


        return count;
    }
}