class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>um;
        for(int x: nums){
            um[x]++;
        }

        for(auto x: um){
            if(x.second> nums.size()/2) return x.first;
        }

        return{};
    }
};