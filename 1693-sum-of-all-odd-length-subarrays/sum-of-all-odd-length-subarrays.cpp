class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n= arr.size(), k=3;
        int tSum=0;
        for(int i=0; i<n; ++i){
            tSum+=arr[i];
        }
        while(k<=n){
            int sum=0;
            for (int i=0 ; i<k; ++i){
                sum += arr[i];
            }
            tSum+=sum;

            for(int i=k; i<n; ++i){
                sum+= arr[i]-arr[i-k];
                tSum+=sum;       
            }
            k+=2;
        }
        return tSum;


    }
};