// link: https://leetcode.com/problems/range-sum-of-bst/

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
    int inorderTraversal(int& sum, TreeNode* node, int low, int high){
        if(node==NULL){
            return sum;
        }
        inorderTraversal(sum, node->left, low, high);
        if(node->val >=low && node->val<=high){
            sum=sum+node->val;
        }
        inorderTraversal(sum, node->right, low, high);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        // vector<int> v;
        int sum=0;
        inorderTraversal(sum, root, low, high);
        
        // for(int i=0;i<v.size();i++){
        //     sum=sum+v[i];
        // }
        return sum;
    }
};