class Solution {
public:
    bool isPerfectSquare(int num) {
        int l =0, r=num;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(1LL * mid * mid == num) return true;
            else if(1LL *mid * mid < num) l= mid+1;
            else r = mid-1;
        }

        return false;
    }
};