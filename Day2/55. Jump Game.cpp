class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIcanReach=0;
        for(int i=0; i<=maxIcanReach&& i<nums.size();i++){
            int currentMax = i+nums[i];
            maxIcanReach = max(currentMax, maxIcanReach);
        }
        if(maxIcanReach>=n-1) return true;
        return false;
    }
};

