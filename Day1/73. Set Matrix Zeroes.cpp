#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>


class Solution {
public:
    void setZeroes(vector<vector<int>>&matrix){
      int rows = matrix.size(), cols = matrix[0].size();
      vector < int > dummy1(rows,-1), dummy2(cols,-1);
      for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
          if (matrix[i][j] == 0) {
            dummy1[i] = 0;
            dummy2[j] = 0;
          }
        }

      }
      for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
          if (dummy1[i] == 0 || dummy2[j]==0) {
            matrix[i][j] = 0;
          }
        }
      }
        
    }
    
};

/* BRUTE FORCE
WORKS WHEN ELEMENTS ARE GREATER OR EQUAL TO 0
void setZeroes(vector<vector<int>>& mtx) {
        int row=mtx.size(), col=mtx[0].size();
        for(int i=0; i<row;i++){
            for(int j=0; j<mtx[i].size();j++){
                if(mtx[i][j]==0){
                    //cout<<"Found 0 at i="<<i<<" j="<<j<<"\n";
                    //set all rows as 0
                    for(int x1=0; x1<col;x1++){
                        if(mtx[i][x1]==0) continue;
                        else mtx[i][x1]=-1; 
                    }
                    cout<<"\n";
                    for(int x2=0; x2<row;x2++){
                        if(mtx[x2][j]==0) continue;
                        else mtx[x2][j]=-1; 

                    }
                }
                
            }
        }
        for(int i=0; i<row;i++){
            for(int j=0; j<col;j++){
                if(mtx[i][j]==-1){
                    mtx[i][j]=0;
                }
                
            }
        }
    }*/