class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int>freq;
        unordered_set<int> us;
        for(int val: nums){
            freq[val]++;
        }
        int sum=0;
        for(auto val : freq){
            if(val.second==1){
                sum = sum+ val.first;
            }

        }

        return sum;
    }
};