class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //remainder ka hash banana hai
        map<int,int> mp;
        int currSum=0; 
        int ans=0,x;
        for(int i=0; i<nums.size();i++){
            currSum+=nums[i];
            if(x<0) currSum+=k;
            x=currSum%k;
            if(currSum==k) ans++;
            if(mp.find(x)!=mp.end()){
                ans+=mp[x];
            }
            mp[x]++;
        }
        return ans;
    }
};

