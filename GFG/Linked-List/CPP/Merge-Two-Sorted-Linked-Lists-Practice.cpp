class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* res=new Node(0);
        Node* temp=res;
        
        while(head1 && head2){
            if(head1->data<=head2->data){
                temp->next=head1;
                head1=head1->next;
            }
            else{
                temp->next=head2;
                head2=head2->next;
            }
            temp=temp->next;
        }
        if(head1){
            temp->next=head1;
        }
        if(head2){
            temp->next=head2;
        }
        return res->next;
    }
};