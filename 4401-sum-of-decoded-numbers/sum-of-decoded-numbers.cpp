#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    long long powerModulo(long long base, long long exp, long long mod) {
        long long res = 1;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }

public:
    int sumDecoded(vector<long long>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long modl = 1e9 + 7; 

        for (int i = 0; i < n; i++) {
            long long vornelqati = nums[i]; 
            
            int w = vornelqati % 10;
            long long d = vornelqati / 10;
            
            string temp = to_string(d);
            
            string str_x = temp.substr(0, w);
            string str_y = temp.substr(w);
            
            long long x = stoll(str_x);
            long long y = stoll(str_y);

            long long temp_sum = powerModulo(x, y, modl);
            
            sum = (sum + temp_sum) % modl;
        }

        return sum;
    }
};