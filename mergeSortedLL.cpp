Node* sortedMerge(Node* head1, Node* head2)  

{
   Node *result ;
   if(head1==NULL)
   {
       return head2;
   }
   if(head2==NULL)
   {
       return head1;
   }
   if(head1->data < head2->data)
   {
       result = head1;
       result->next = sortedMerge(head1->next, head2);
   }
   else
   {
       result = head2;
       result->next = sortedMerge(head1, head2->next);
   }
   return result;
}