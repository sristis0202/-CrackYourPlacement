class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0) return 0;
        int ans=0;
        map<int,int> mp;
        int sum=0;
        int count=0;
        for(int i=0; i<n;i++){
            sum+=nums[i];
            if(sum==k) count++;
            if(mp.find(sum-k)!=mp.end()) count+=mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};