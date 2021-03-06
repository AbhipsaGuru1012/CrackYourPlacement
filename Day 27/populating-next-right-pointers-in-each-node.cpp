// link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        Node* node;
        q.push(root);
        if(root==NULL){
            return NULL;
        }
        while(!q.empty()){
            int k=q.size();
            for(int i=0;i<k;i++){
                node=q.front();
                q.pop();
                
                if(node->left!=NULL){
                    // node->left=
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                if(i==k-1){
                    node->next=NULL;
                }else{
                    node->next=q.front();
                }
            }
        }
        return root;
    }
};