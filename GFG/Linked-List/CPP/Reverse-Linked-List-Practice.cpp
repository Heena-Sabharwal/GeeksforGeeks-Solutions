}
};
*/
class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        
        if(head->next==NULL)
            return head;
        
        Node* prev=NULL;
        Node* current=head;
        Node* follow=current->next;
        
        while(current){
            follow=current->next;
            current->next=prev;
            prev=current;
            current=follow;
        }
        return prev;
    }
};