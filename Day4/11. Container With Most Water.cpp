#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxH=0, maxW=0,h;
        for(int i=0; i<n; i++){
            //maxH = max(maxH, heights[i]);
            if(heights[i]>maxH){
                h=i; maxH=heights[i];
            }
            maxW = max(maxW, (heights[i]-maxH)*h);
        }
        return maxW;
    }
};
