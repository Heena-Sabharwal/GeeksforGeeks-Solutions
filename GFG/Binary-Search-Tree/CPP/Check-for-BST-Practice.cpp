Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */
class Solution {
  public:
    bool isBST(Node* root) {
        // code here
        if(root==NULL)
            return true;
        return helper(root,INT_MIN, INT_MAX);
        
    }
    
    bool helper(Node* root, int mini, int maxi){
        if(root==NULL)
            return true;
        
        if(root->data >= maxi || root->data <= mini)
            return false;
            
        return helper(root->left,mini,root->data) && helper(root->right,root->data,maxi);
        
        return true;
    }
};