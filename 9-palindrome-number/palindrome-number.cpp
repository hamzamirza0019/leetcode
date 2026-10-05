class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int size = str.size();
        int p1 = 0;
        int p2 = size-1;
        while(p1<=p2){
            if(str[p1]!=str[p2]) return false;
            p1++;p2--;
        }

        return true;
    }
};