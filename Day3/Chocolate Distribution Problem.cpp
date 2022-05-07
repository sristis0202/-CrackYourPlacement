#include<iostream>
#include<vector>

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        if(n==0 || m==0){
            return 0;
        }
        sort(a.begin(), a.end());
        if(n<m) return -1;
        int ans = INT_FAST16_MAX;
        for(int i=0; i+m-1<n; i++){
            ans = min(ans, a[i]-a[i+m-1]);
        }    
        return ans;    
        
    }
};