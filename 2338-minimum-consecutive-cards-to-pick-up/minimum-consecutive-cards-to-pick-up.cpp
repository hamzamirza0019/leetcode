class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> um;
        int ans =INT_MAX;
        for(int i=0; i<cards.size(); ++i){
            if(um.find(cards[i])!= um.end()){
                ans = min(i - um[cards[i]] +1, ans);
            }
            um[cards[i]] = i;
        }

        return ans==INT_MAX?-1:ans;
    }
};