#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0 ;i<row;i++){ //Transpose 
            for(int j=i;j<col;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<row;i++){                         //interchanging columns
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};