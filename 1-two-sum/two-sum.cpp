class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        // vector<int> res;
        for(int i=0; i<nums.size(); ++i){
            if(hm.find(target-nums[i])!= hm.end()){
                // res.push_back(hm[target-nums[i]]);
                // res.push_back(i);
                return {hm[target - nums[i]], i};
            }

            else{
                hm[nums[i]]=i;
            } 
        }
        return {};
    }
};