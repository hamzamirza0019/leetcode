class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>um;
        vector<int> res;

        for(int x: nums1){
            um[x]++;
        }

        for(int x: nums2){
            if(um.find(x) != um.end()){
                res.push_back(x);
                um[x]--;
            }
            if(um[x]==0) um.erase(x);
        }

        return res;
    }
};