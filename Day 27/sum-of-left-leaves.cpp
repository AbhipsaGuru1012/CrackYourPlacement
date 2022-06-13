// link: https://leetcode.com/problems/sum-of-left-leaves/

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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        queue<TreeNode*> q;
        q.push(root);
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        while(!q.empty()){
            int k=q.size();
            for(int i=0;i<k;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL && (node->left->left)==NULL && node->left->right==NULL){
                    sum=sum+node->left->val;
                }
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
        }
        return sum;
    }
};