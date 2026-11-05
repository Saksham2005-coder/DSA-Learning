class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater =0;
        int left=0, right=height.size()-1;
        while(left<right){
            int area = (right-left) * min(height[right],height[left]);
            maxWater = max(maxWater,area);

            if(height[left]<height[right])
            left++;
            else
            right--;
        }
        return maxWater;
    }
};