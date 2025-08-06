class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int r=0;
        for(int i=0; i<weights.size(); ++i){
            r+= weights[i];
        }
        int l = *max_element(weights.begin(), weights.end()), minCapacity = 0;
        while(l<=r){
            int mid = (l+r)/2;
            if(check(weights, mid, days)){
                minCapacity = mid;
                r= mid-1;
            }
            else l = mid+1;
        }

        return minCapacity;



    }

    bool check(vector<int> arr, int m , int d){
        int sum=0, count=1;
        for(int i=0; i<arr.size(); ++i){
            if (arr[i] > m) return false;
            
            if(sum + arr[i] > m){
                count++;
                sum=0;
            }
            sum+= arr[i];
        }
        return count<= d;
    }



};