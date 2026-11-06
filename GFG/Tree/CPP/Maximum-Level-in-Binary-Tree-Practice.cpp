int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */
class Solution {
  public:
    int maxLevel(Node *root) {
        // code here
        
        if(root->left == NULL && root->right==NULL){
            return 1;
        }
        int l=0;
        int r=0;
        
        if(root->left){
            l=maxLevel(root->left);
        }
        if(root->right){
            r=maxLevel(root->right);
        }
        return max(l,r)+1;
    }
};