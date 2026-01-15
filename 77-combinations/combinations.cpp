class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        generatePairs(current, n, k, 1);
        return res;
    }

    void generatePairs(vector<int> &current, int &n, int &k, int num){
        if( current.size() == k){
            res.push_back(current);
            return;
        }

        for( int i=num; i<=n; ++i){
            current.push_back(i);
            generatePairs(current, n, k, i+1);
            current.pop_back();
        }

        return;
    }
};