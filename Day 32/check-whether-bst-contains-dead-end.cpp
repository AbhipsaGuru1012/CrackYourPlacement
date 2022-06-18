// link: https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}




int getCountOfNode(Node *root, int l, int h)
{

    if (!root) return 0;


    if (root->data == h && root->data == l)
        return 1;

    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


bool isDeadEnd(Node *root);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;

        root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);

        }

        
     cout<<isDeadEnd(root);
     cout<<endl;
    }
}

// } Driver Code Ends


/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/

/*You are required to complete below method */
vector<int> findNodes(Node* node, vector<int>& v, vector<int>& v1){
    if(node->left==NULL && node->right==NULL){
        v.push_back(node->data);
        v1.push_back(node->data);
        return v1;
    }
    v1.push_back(node->data);
    if(node->left!=NULL){
        findNodes(node->left, v, v1);
    }
    if(node->right!=NULL){
        findNodes(node->right, v, v1);
    }
    return v1;
    // if(node==NULL){
    //     return 0;
    // }
    // int lh=maxDepth(node->left, x);
    // int rh=maxDepth(node->right, x);
    
    // if(lh!=rh){
    //     x = -1;
    // }
    // return 1+max(lh, rh);
}
bool isDeadEnd(Node *root)
{
    //Your code here
    if(root==NULL){
        return false;
    }
    vector<int> v;
    vector<int> v1;
    findNodes(root, v, v1);
    v1.push_back(0);
    for(int i=0;i<v.size();i++){
        // vector<int>::iterator it;
        // it = std::find (v1.begin(), v1.end(), v[i]-1);
        // cout<<v[i]<<" ";
        // cout<<(find (v1.begin(), v1.end(), v[i]-1) != v1.end())<<" ";
        if (find (v1.begin(), v1.end(), v[i]-1) != v1.end() && find (v1.begin(), v1.end(), v[i]+1)!=v1.end())
        {
            return true;
        }
        
    }
    return false;
    
    
}