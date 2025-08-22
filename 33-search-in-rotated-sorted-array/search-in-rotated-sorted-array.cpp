class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0, r = nums.size()-1;
        while( l <= r){
            int mid = ( l + r )/2;
            if(nums[mid] == target) return mid ;
            if(nums[mid] >= nums[0]){
                if(nums[0]<=target && nums[mid] >= target){
                    r = mid -1;
                }
                else{
                    l = mid +1;
                }
            }
            else{
                if(nums[nums.size()-1]>=target && nums[mid] <= target){
                    l = mid +1;
                }
                else r = mid - 1;
            }
        }

        return -1;
        
    }
};