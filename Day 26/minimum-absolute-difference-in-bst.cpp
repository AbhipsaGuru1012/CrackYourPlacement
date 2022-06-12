// link: https://leetcode.com/problems/minimum-absolute-difference-in-bst/submissions/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(vector<int>& v, TreeNode* node){
        if(node==NULL){
            return v;
        }
        inorderTraversal(v, node->left);
        v.push_back(node->val);
        inorderTraversal(v, node->right);
        return v;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inorderTraversal(v, root);
        sort(v.begin(), v.end());
        int sum=v[1]-v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]-v[i-1]<sum){
                sum=v[i]-v[i-1];
            }
        }
        return sum;
    }
};