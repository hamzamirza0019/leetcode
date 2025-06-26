class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        unordered_map<char,int> um;
        for(auto x: s){
            um[x]++;
        }
        int count=0;
        bool odd= false;
        for(auto x: um){
            if((x.second&1) ==0) count+=x.second;
            else{
                count+=x.second-1;
                odd = true;
            }
        }

        if (odd) count++;

        return count;

    }
};