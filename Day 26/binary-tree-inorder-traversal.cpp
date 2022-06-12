// link: https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    vector<int> inorderTraverse(vector<int>& v, TreeNode* node){
        if(node==NULL){
            return v;
        }
        inorderTraverse(v, node->left);
        v.push_back(node->val);
        inorderTraverse(v, node->right);
        return v;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL){
            return v;
        }
        return inorderTraverse(v, root);
        // return v;
    }
};