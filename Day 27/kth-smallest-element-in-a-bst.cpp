// link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    vector<int> inorderTraversal(vector<int>& v, TreeNode* node){
        if(node==NULL){
            return v;
        }
        inorderTraversal(v, node->left);
        v.push_back(node->val);
        inorderTraversal(v, node->right);
        return v;
    }
    int kthSmallest(TreeNode* root, int k) {
       vector<int> v;
        inorderTraversal(v, root);
        priority_queue <int> maxh;
        for(int i=0;i<v.size();i++){
            maxh.push(v[i]);
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        return maxh.top();
    }
};