    int countNodes(ListNode* head)
    {
        ListNode* ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) 
    {
        int n=countNodes(head);
        ListNode* ptr=head;
        while(n!=0&&n!=1)
        {
            ptr=ptr->next;
            n-=2;
        }
        return ptr;
    }