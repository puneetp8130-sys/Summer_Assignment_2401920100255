class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int val;
        //Using Kadance's Algorithm
        for(int i = 0; i < nums.size(); i++){
            val = target-nums[i];
            if(mpp.find(val) != mpp.end()) return {i,mpp[val]};
             mpp[nums[i]] = i;
        }
        return {};
    }
};
