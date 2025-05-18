class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        double sum=0, maxAvg= INT_MIN;
        for(int i=0; i<k; ++i){
            sum += nums[i];
        }
        if(maxAvg< sum/k){
            maxAvg = sum/k;
        }

        for(int i=k; i<n; ++i){
            sum+= nums[i] - nums[i-k];
            if(maxAvg < sum/k){
                maxAvg = sum/k;
            } 
        }

        return maxAvg;
    }
};