class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>um;
        for(int x: nums){
            if(um.find(x) != um.end()){
                return true;
            }
            um[x]++;

        }

        return false;
    }
};