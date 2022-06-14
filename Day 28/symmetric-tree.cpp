// link: https://leetcode.com/problems/symmetric-tree/

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
    bool checkSymmetry(TreeNode* node, TreeNode* node1, bool& x, bool& y){
         if(node==NULL && node1==NULL){
             y=true; 
             return true;
         }
        else if((node!=NULL && node1==NULL) || node1!=NULL && node==NULL){
            x=false;
            return false;
        }
        
        else if(node->val == node1->val){
            y=true;
            checkSymmetry(node->left, node1->right, x, y);
             checkSymmetry(node->right, node1->left, x, y);
            // return true;
            
        }else if(node->val!=node1->val){
            x=false;
            return false;
        }
        cout<<x<<" "<<y;
        return (x&&y);
        
    }
    bool isSymmetric(TreeNode* root) {
        bool x=true;
        bool y=true;
        checkSymmetry(root->left, root->right, x, y);
        return x&&y;
    }
};