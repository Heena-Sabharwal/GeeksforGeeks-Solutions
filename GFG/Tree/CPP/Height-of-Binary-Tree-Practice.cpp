int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        
        int l=0,r=0;
        
        if(root->left){
            l= height(root->left);
        }
        if(root->right){
            r= height(root->right);
        }
        
        return max(l,r)+1;
        
        
    }