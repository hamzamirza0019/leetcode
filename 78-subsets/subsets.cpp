class Solution {
public:

    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        int n = nums.size();
        prints(0, current, nums, n);
        return ans;
    }

    void prints( int i , vector<int> current, vector<int> nums, int n){

        if(i==n){
            ans.push_back(current);
            return;
        }

        current.push_back(nums[i]);
        prints( i+1, current, nums, n);
        current.pop_back();
        prints( i+1, current, nums, n);

        return ;
    }


};