class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int ind =-1;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] >0) {
                ind =i;
                break;
            }
        }
        int p1=0, p2=0;
        if(ind != -1){
            p1 = ind-1, p2 = ind;
            while(p1>=0 && p2<nums.size()){
                if(nums[p1] * nums[p1] >= nums[p2] * nums[p2]){
                    res.push_back(nums[p2] * nums[p2]);
                    p2++; 
                }
                else{
                    res.push_back(nums[p1] * nums[p1]);
                    p1--;
                }
            }
            while(p1>=0){
                res.push_back(nums[p1] * nums[p1]);
                p1--;
            }
            while(p2<nums.size()){
                res.push_back(nums[p2] * nums[p2]);
                p2++;
            }
        }

        else{
            int i=nums.size()-1;
            while(i>=0){
                res.push_back(nums[i] * nums[i]);
                i--;
            }  
        }

        return res;

    }
};