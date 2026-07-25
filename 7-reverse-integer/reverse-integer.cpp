class Solution {
public:
    int reverse(int x) {
        
        long long num = x;
        long long ans = 0 ;
        while( !(num == 0) ){
            int  rem = num%10;
            ans =  ans * 10 + rem ;
            num/=10;
        }
        if (INT_MAX < ans || INT_MIN > ans){
            return 0;
        }else{
            return ans;
        }
    
    }
};