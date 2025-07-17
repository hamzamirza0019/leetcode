class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int p1=0, p2=0,p3=0;
       vector<int> arr(m+n);
       while(p1<m && p2<n){
            if(nums1[p1] <= nums2[p2]){
                arr[p3] = nums1[p1];  
                p1++;p3++;
            }
            else {
                arr[p3] = nums2[p2];
                p2++; p3++;
            }
       } 

        while(p1<m){
            arr[p3++] = nums1[p1++];
            
        }

        while(p2<n){
            arr[p3++] = nums2[p2++];
            
        }

        for(int i=0; i<arr.size(); ++i){
            nums1[i] = arr[i];
        }

    }
};