class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long long prod1=1, prod2=1;
        int n= nums.size();
        sort(nums.begin(), nums.end());
        prod1 = nums[n-1] * nums[n-2] * nums[n-3];
        prod2 = nums[0] * nums[1] * nums[n-1];

        return max(prod1, prod2);
        
    }
};