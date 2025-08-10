class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0, p2 = height.size()-1;
        long long ans = 0;
        while(p1<p2){
            long long area = (p2-p1) * min(height[p2], height[p1]);
            ans = max(ans, area);
            if(height[p1] > height[p2]) p2--;
            else p1++;
            
        }

        return ans;

    }
};