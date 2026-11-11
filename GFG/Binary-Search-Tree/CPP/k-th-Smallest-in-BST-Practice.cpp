Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
    vector<int>in;
  public:
    int kthSmallest(Node *root, int k) {
        // code here
        inorder(root);
        
        if(in.size()>=k)
            return in[k-1];
        return -1;
        
    }
    void inorder(Node* root){
        if(root==NULL)
            return;
        inorder(root->left);
        in.push_back(root->data);
        inorder(root->right);
    }
};