class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = nums.size();
        int i=1;
        while(i<k){
            if(nums[i-1] == nums[i]) {
                nums.erase(nums.begin() + i-1);
                k--;
            }
            else{
                i++;
            }
        }
        return k;
    }
    
    
};