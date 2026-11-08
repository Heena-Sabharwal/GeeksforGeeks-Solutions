};*/
class Solution {
    vector<int>res;
    queue<Node*>nodes;
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        nodes.push(root);
        
        while(!nodes.empty()){
            Node* curr=nodes.front();
            solve(curr);
            nodes.pop();
        }
        return res;
    }
    
    void solve(Node* root){
        if(root==NULL)
            return;
        res.push_back(root->data);
        if(root->left){
            nodes.push(root->left);
        }
        if(root->right){
            nodes.push(root->right);
        }
    }
};