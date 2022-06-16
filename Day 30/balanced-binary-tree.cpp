// link: https://leetcode.com/problems/balanced-binary-tree/

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
    int balancedTree(TreeNode* node){
        if(node==NULL){
            return 0;
        }
        int lh=balancedTree(node->left);
        int rh=balancedTree(node->right);
        if(lh==-1 || rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return 1+max(lh, rh);
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int check= balancedTree(root);
        if(check==-1){
            return false;
        }
        return true;
    }
};