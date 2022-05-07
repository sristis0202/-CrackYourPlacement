class Solution {
public:
    vector<int> moveZeroes(vector<int>& arr) {
        int n= arr.size();
        int l=0, r=0;
        while(r<n){
            if(arr[r]==0) r++;
            else{
                if(arr[l]==0){
                    swap(arr[r], arr[l]);
                }
                r++; l++;
            }
        }
        return arr;
        
    }
};