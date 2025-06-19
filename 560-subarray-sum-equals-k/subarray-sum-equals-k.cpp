class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum=0;
        int count=0;
        // long long pSum[nums.size()];
        unordered_map<long long, int>us;
        us[0] = 1;
        for(int i=0; i<nums.size(); ++i){
            sum+=nums[i];
            if(us.find(sum-k)!= us.end()){
                count+= us[sum-k];
            }
            us[sum]++;;
        }
        return count;


    }
};