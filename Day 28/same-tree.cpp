// link: https://leetcode.com/problems/same-tree/

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<vector<int>> v;
        vector<vector<int>> v1;
        queue<TreeNode*> qu;
        queue<TreeNode*> q1;
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL && q!=NULL || p!=NULL && q==NULL){
            return false;
        }
        qu.push(p);
        q1.push(q);
        while(!qu.empty()){
            int k=qu.size();
            vector<int> v2;
            for(int i=0;i<k;i++){
                TreeNode* node=qu.front();
                qu.pop();
                if(node->left==NULL && node->right!=NULL || node->left!=NULL){
                    if(node->left==NULL && node->right!=NULL){
                        node->left=new TreeNode(INT_MIN);
                    }
                    qu.push(node->left);
                   
                }
                
                if(node->right==NULL && node->left!=NULL || node->right!=NULL){
                    if(node->right==NULL && node->left!=NULL){
                        node->right=new TreeNode(INT_MIN);
                    }
                    qu.push(node->right);
                }
                
                v2.push_back(node->val);
            }
            v.push_back(v2);
        }
        while(!q1.empty()){
            int k=q1.size();
            vector<int> v3;
            for(int i=0;i<k;i++){
                TreeNode* node=q1.front();
                q1.pop();
                if(node->left==NULL && node->right!=NULL || node->left!=NULL){
                    if(node->left==NULL && node->right!=NULL){
                        node->left=new TreeNode(INT_MIN);
                    }
                    q1.push(node->left);
                   
                }
                
                if(node->right==NULL && node->left!=NULL || node->right!=NULL){
                    if(node->right==NULL && node->left!=NULL){
                        node->right=new TreeNode(INT_MIN);
                    }
                    q1.push(node->right);
                }
                v3.push_back(node->val);
            }
            v1.push_back(v3);
        }
        if(v==v1){
            return true;
        }
        return false;
    }
};