    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode *slow=head, *fast=head;
        if(head==NULL || head->next==NULL) return NULL;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            if(fast!=NULL && fast->next!=NULL)slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }