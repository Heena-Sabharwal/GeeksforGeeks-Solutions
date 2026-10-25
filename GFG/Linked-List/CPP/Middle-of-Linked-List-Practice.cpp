/* Linked List Node Structure
class Node {
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
}; */
class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* fast=head;
        Node* slow=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next){
            return slow->next->data;
        }
        return slow->data;
    }
};