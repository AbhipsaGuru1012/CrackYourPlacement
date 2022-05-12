// link: https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> v1;
        int cols=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    vector<int> v;
                    v.push_back(i);
                    v.push_back(j);
                    v1.push_back(v);
                    
                }
            }
        }
        for(int i=0;i<v1.size();i++){
            int n=v1[i][0];
            int j=v1[i][1];
            for(int k=0;k<cols;k++){
                matrix[n][k]=0;
            }
            for(int m=0;m<matrix.size();m++){
                matrix[m][j]=0;
            }
        }
    }
};