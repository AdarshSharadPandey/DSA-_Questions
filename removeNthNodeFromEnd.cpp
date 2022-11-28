    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        ptr=head;
        if(count==n)
        {
            return head->next;
        }
        count=count-n-1;
        while(count)
        {
            count--;
            ptr=ptr->next;
        }
        ListNode* temp=ptr->next;
        ptr->next=ptr->next->next;
        delete(temp);
        return head;
    }