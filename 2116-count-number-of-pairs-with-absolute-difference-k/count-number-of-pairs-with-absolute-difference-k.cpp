class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int>um;
        int count=0;
        for(int i=0; i<nums.size(); ++i){
            count+=  um[k+nums[i]]+ um[nums[i]-k];

            um[nums[i]]++;
        }
        return count;
    }
}; 