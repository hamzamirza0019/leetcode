class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size(), frst=INT_MAX, scnd = INT_MAX;
        for(int i=0; i<n; ++i){
            if(n<3){
                return false;
            }
            if(frst>=nums[i]){
                frst = nums[i];
            }
            else if(scnd >= nums[i]){
                scnd = nums[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
};