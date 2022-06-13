// link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

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
    vector<int> preOrderTraversal(vector<int>& v, TreeNode* node){
        if(node==NULL){
            return v;
        }
        v.push_back(node->val);
        preOrderTraversal(v, node->left);
        preOrderTraversal(v, node->right);
        return v;
    }
    void flatten(TreeNode* root) {
        vector<int> v;
        preOrderTraversal(v, root);
        // struct TreeNode* root1=new TreeNode(v[0]);
        //make changes in the same root pointer
        for(int i=1;i<v.size();i++){
            root->right=new TreeNode(v[i]);
            root->left=NULL;
            root=root->right;
        }
        return;
    }
};