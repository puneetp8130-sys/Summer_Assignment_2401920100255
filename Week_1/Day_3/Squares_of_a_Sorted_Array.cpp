class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int left = 0;
        int right = n-1;
        int pos = n-1;

        while(left <= right){
            int squareL = nums[left]*nums[left];
            int squareR = nums[right]*nums[right];

            if(squareL > squareR){
                ans[pos] = squareL;
                left++;
            }
            else{
                ans[pos] = squareR;
                right--;
            }
            pos--;
        }
        return ans;   
    }
};