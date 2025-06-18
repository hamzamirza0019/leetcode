class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int>hm;
        int pSum[nums.size()];
        int sum =0, length =0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]==0) nums[i]=-1;
            sum+=nums[i];
            pSum[i] = sum;
        }

        hm[0]=-1;
        for(int i=0; i<nums.size(); ++i){
            if(hm.find(pSum[i])!=hm.end()){
                length =max (length , i -hm[pSum[i]]);

            }
            else{
                hm[pSum[i]]=i;
            }
        }

        return length;

    }
};