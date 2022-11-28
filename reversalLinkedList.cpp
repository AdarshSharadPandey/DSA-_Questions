    ListNode* reverseList(ListNode* head) 
    {
        ListNode* curr=head, *nextNode=NULL, *prev=NULL;
        if(head==NULL) return NULL;
        while(curr!=NULL)
        {
            nextNode = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }