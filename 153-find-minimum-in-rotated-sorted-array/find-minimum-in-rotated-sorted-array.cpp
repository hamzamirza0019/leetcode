class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0 , r = nums.size()-1, ans;
        while( l <= r){
            int mid = ( l + r)/2;
            if(nums[0] <= nums[mid]){
                ans = mid;
                l = mid +1;
            }
            else {
                r = mid - 1;
            }
        }
        if(ans == nums.size()-1){
            return nums[0];
        }
        else{
            return nums[ans+1];
        }
    }
};