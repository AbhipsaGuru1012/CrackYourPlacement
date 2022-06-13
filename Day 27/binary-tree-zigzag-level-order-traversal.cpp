// link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        if(root==NULL){
            return v;
        }
        q.push(root);
        int j=0;
        while(!q.empty()){
            vector<int> v1;
            int k=q.size();
            for(int i=0;i<k;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                v1.push_back(node->val);
            }
            if(j%2==0){
                v.push_back(v1);
            }else{
                reverse(v1.begin(), v1.end());
                v.push_back(v1);
            }
            j++;
        }
        return v;
    }
};