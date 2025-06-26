class Solution {
public:
    char findTheDifference(string s, string t) {
        int xOr=0;
        for(auto x: s){
            xOr^=x;
        }

        for(auto x: t){
            xOr^=x;
        }

        return xOr;
    }
};