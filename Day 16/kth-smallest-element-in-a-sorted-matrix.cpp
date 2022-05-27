// link: https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         vector<int> v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        priority_queue<int, vector<int>, greater<int> > minh;
        for(int i=0;i<v.size();i++){
            minh.push(v[i]);
        }
        int m=1;
        while(minh.size()>0){
           if(m==k){
               return minh.top();
           }else{
               m++;
               minh.pop();
           }
        }
        return 0;
    }
};