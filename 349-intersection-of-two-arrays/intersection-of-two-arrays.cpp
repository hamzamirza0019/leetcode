class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_set<int>um;
        for(int x: nums1){
            um.insert(x);
        }

        for(int x: nums2){
            if(um.find(x)!= um.end()){
                res.push_back(x);
                um.erase(x);
            }
        }

        return res;
    }
};