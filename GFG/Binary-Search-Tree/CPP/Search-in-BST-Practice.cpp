/* Definition for Node
class Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool search(Node* root, int key) {
        // code here
        if(root->data==key)
            return true;
        if(root==NULL)
            return false;
        if(root->data<key && root->right)
            return search(root->right,key);
        if(root->data>key && root->left){
            return search(root->left,key);
        }
        return false;
    }
};