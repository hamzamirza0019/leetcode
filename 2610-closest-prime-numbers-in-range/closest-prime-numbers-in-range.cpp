class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if (right < 2 || left > right) return {-1, -1};

        int limit = sqrt(right) + 1;
        vector<bool> isPrime(limit + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= limit; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= limit; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> primes;
        for (int i = 2; i <= limit; ++i) {
            if (isPrime[i]) primes.push_back(i);
        }

        int size = right - left + 1;
        vector<bool> sp(size, true);
        if (left == 1) sp[0] = false;

        for (int p : primes) {
            int start = max(p * p, ((left + p - 1) / p) * p);
            for (int j = start; j <= right; j += p) {
                sp[j - left] = false;
            }
        }

        vector<int> found;
        for (int i = 0; i < size; ++i) {
            if (sp[i]) found.push_back(left + i);
        }

        int minDiff = INT_MAX;
        vector<int> ans = {-1, -1};

        for (int i = 1; i < found.size(); ++i) {
            int diff = found[i] - found[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                ans = {found[i - 1], found[i]};
            }
        }

        return ans;
    }
};
