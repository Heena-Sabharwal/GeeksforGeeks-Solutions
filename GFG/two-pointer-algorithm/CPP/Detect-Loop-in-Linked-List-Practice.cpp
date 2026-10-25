/* Linked List Node Structure
class Node {
   public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
} */
class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* fast=head;
        Node* slow=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
                return true;
        }
        
        return false;
    }
};