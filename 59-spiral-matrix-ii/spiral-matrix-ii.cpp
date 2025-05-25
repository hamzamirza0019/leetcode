class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int i=0, j=0, num=1;
        while(n>1){
            for(int l=1; l<=n-1; l++){
                mat[i][j]= num;
                j++, num++;
            }

            for(int l=1; l<=n-1; l++){
                mat[i][j] = num;
                i++, num++;
            }


            for(int l=1; l<=n-1; l++){
                mat[i][j]= num;
                j--, num++;
            }


            for(int l=1; l<=n-1; l++){
                mat[i][j] = num;
                i--, num++;
            }

            i++,j++, n=n-2;


        }

        if(n==1){
            mat[i][j]= num;
        }
        return mat;
    }
};