class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>freq;
        unordered_set<int> us;
        for(int val : arr){
            freq[val]++;
        }
        for(auto pair : freq){
           if (us.count(pair.second)){
            return false;
           }
           us.insert(pair.second);
        }

        return true;
    }
};