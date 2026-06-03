class Solution {
public:
    int maxArea(vector<int>& height) {
    int n = height.size();
    int left = 0, right = n-1;
    int watercontain = 0;

    while(left < right){
        int width = right - left;
        int h = min(height[left],height[right]);
        watercontain = max(watercontain,h*width);

        if(height[left] < height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return watercontain;    
    }
};