class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int s = -1, e = -1;
        vector<int> res;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] < target) {
                l = mid + 1;
            } else {
                if (nums[mid] == target) s = mid;
                r = mid - 1;
            }
        }

        l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] > target) {
                r = mid - 1;
            } else {
                if (nums[mid] == target) e = mid;
                l = mid + 1;
            }
        }

        res.push_back(s);
        res.push_back(e);
        return res;
    }
};
