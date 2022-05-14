#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> answer;
        int n=nums.size();
        for(int i=0; i<nums.size();i++){

            for(int j=i+1; j<nums.size(); j++){
                int low=j+1, high = nums.size()-1;

                while(low<high){
                    int remSum=target-nums[i]-nums[j];
                    if(nums[low]+nums[high]>remSum) high--;
                    else if(nums[low]+nums[high]<remSum) low++;
                    else{
                        //insert the values
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[low];
                        quadruplet[3] = nums[high];
                        answer.push_back(quadruplet);

                        while( low < high && nums[low]==quadruplet[2] ) low++;
                        while( low < high && nums[high]==quadruplet[3] ) high--;


                    }
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return answer;
    }
};