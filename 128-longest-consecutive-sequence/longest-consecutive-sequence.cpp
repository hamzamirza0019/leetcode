class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us;
        for(int x: nums){
            us.insert(x);
        }
        int ans=0;
        for(auto x: us){
            if(us.find(x-1) == us.end()){
                int s=x, l=0;
                while(us.find(s) != us.end()){
                    l++;s++;
                }
                ans = max(ans, l);
            }
        }

        return ans;
    }
};