class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0;
        int r = 0;
        for(int i=0; i<weights.size(); ++i){
            r+=weights[i];
        }

        while(l <= r){
            int mid = l + (r - l) / 2;
            if(check(weights, mid, days)){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }

    bool check(const vector<int>& arr, int m , int d){
        int sum = 0, count = 1;
        for(int w : arr){
            if(w > m) return false;
            if(sum + w > m){
                count++;
                sum = 0;
            }
            sum += w;
        }
        return count <= d;
    }
};
