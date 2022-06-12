// link: https://leetcode.com/problems/invert-binary-tree/

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
    TreeNode* swapNode(TreeNode* node){
        if(node==NULL){
            return node;
        }
        TreeNode* temp=node->left;
        node->left=node->right;
        node->right=temp;
        swapNode(node->left);
        swapNode(node->right);
        return node;
    }
    TreeNode* invertTree(TreeNode* root) {
        return swapNode(root);
    }
};