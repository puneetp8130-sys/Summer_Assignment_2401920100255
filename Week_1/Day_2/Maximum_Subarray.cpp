class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     long long sum = nums[0];
     long long maxsum = nums[0];
     for(int i = 1; i < nums.size(); i++){
        sum = max(sum+nums[i],(long long)nums[i]);
        maxsum = max(maxsum,sum);
     }
     return maxsum;   
    }
};