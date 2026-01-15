class Solution {
public:
    vector<vector<int>> res;
    // unorderes_map<int, int> um;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        uniqueCombinations( 0, target, current, candidates);
        return res;
    }

    void uniqueCombinations(int start, int remaining , vector<int> &current,     vector<int>& candidates){

        
        if(remaining ==0){
            res.push_back(current);
            return;
        }



        for(int i= start; i<candidates.size(); i++){
            if(candidates[i] > remaining) return; 
            current.push_back(candidates[i]);
            uniqueCombinations(i , remaining - candidates[i], current, 
            candidates);
            current.pop_back();
        }
        return;
    }
};