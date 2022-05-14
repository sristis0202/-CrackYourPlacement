#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int i,j,target;
        vector<vector<int>> ans;
        for(int k=0; k<n; k++){
            if ((k>0) && (nums[k]==nums[k-1]))
            continue;
            //target = 0 - nums[k];
            i = k+1; j=n-1;
            while(i<j){
                vector<int> t;
                if(nums[k]+nums[i]+nums[j]>0) {
                    j--;
                }
                else if(nums[k]+nums[i]+nums[j]<0){
                    i++;
                }
                else{
                    ans.push_back(vector<int> {nums[k], nums[i], nums[j]});
                    while(i<j && nums[i]==nums[i+1]) i++;
                    while(i<j && nums[j]==nums[j-1]) j--;
                    i++; j--;

                }
            }
        }
        return ans;
        
    }
};