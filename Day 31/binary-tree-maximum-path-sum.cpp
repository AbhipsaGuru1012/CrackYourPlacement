// link: https://leetcode.com/problems/binary-tree-maximum-path-sum/

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
    int findMaxSum(TreeNode* node, int& mx){
        if(node==NULL){
            return 0;
        }
        
        int sumOfLeftTree=max(0, findMaxSum(node->left, mx));//incase returns a negative number it's output will be 0
        
        int sumOfRightTree=max(0, findMaxSum(node->right, mx));
        // int k=max((node->val+sumOfLeftTree), (node->val+sumOfRightTree ));
        // int m=max(k, node->val+sumOfLeftTree+sumOfRightTree);
        mx=max(mx, node->val+sumOfLeftTree+sumOfRightTree);
        
        return node->val+max(sumOfLeftTree, sumOfRightTree);
    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        findMaxSum(root, mx);
        return mx;
    }
};