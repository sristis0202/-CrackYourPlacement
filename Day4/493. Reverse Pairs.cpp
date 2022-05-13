#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int Merge(vector<int>&nums, int low, int mid, int high){
        int total = 0;
        int j = mid+1;
        for(int i=low; i<=mid; i++){
            while(j<=high && nums[i] > 2 LL *nums[j]){
                j++;
            }
            total += (j-(mid+1));
        }
        vector<int> t;
        int left = low, right = mid+1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                t.push_back(nums[left++]);
            } 
            else {
                t.push_back(nums[right++]);
            }
        }
        while (left <= mid) {
            t.push_back(nums[left++]);
        }
        while (right <= high) {
            t.push_back(nums[right++]);
        }

        for (int i = low; i <= high; i++) {
            nums[i] = t[i - low];
        }
        return total;

    }

    int MergeSort(vector < int > & nums, int low, int high) {

        if (low >= high) return 0;
        int mid = (low + high) / 2;
        int inv = MergeSort(nums, low, mid); //left
        inv += MergeSort(nums, mid + 1, high); //right
        inv += Merge(nums, low, mid, high); //merging
        
        return inv;
    }
    int reversePairs(vector<int>& nums) {
        return MergeSort(arr, 0, arr.size() - 1);
    }
};











/*class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]>2*nums[j]) ans++;
            }
        }
        return ans;
    }
};*/
