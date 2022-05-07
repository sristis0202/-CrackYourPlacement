class Solution {
public:
    vector<int> moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int l=0,r=0;
        if(n>1){
            while(r<n){
                if(arr[r]==0){
                    r++; 
                } 
                else{
                    if(arr[l]==0){
                        swap(arr[l],arr[r]); 
                    }
                    r++;l++;
                    
                }
            }
        }

        return arr;
        
    }
};