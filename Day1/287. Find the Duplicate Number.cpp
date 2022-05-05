#include<iostream>
#include<vector>
#include<unordered_map>





using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size();i++){
            if(mp[nums[i]]==1) return nums[i];
            mp[nums[i]]++;
        }
        return 0;
    }
};









