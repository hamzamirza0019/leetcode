class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        string s = "";
        allBalanced(0, 0, s, n);
        return res;
    }

    void allBalanced(int oCount, int cCount, string &s, int &n){
        if(oCount == n && cCount ==n){
            res.push_back(s);
            return;
        }

        if( oCount < n){
            s+="(";
            allBalanced(oCount+1, cCount, s, n);
            s.pop_back();
        }
        if( oCount> cCount){
            s+=")";
            allBalanced(oCount, cCount+1, s, n);
            s.pop_back();
        }

        return;
    }
};