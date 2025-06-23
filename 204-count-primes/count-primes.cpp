class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        vector <bool> prime(n,true);
        prime[0]=prime[1]=false;

        int count=0;
        for(int i=2; i<prime.size(); ++i){
            if(prime[i]){
                count++;
                for(int j=2; i*j<n; ++j){
                    prime[i*j]=false;
                }
            }
        }

        return count;
    }
};