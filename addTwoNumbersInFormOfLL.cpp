    ListNode* reverse(ListNode* l)
    {
        if(l==NULL) return l;
        ListNode* prev=NULL,*nex=NULL,*curr=l;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* la, ListNode* lb) 
    {
        ListNode* l1=reverse(la);
        ListNode* l2=reverse(lb);
        int data=0,carry;
        ListNode *ptr1=l1,*ptr2=l2,*ptr3;
        if(ptr1) data+=ptr1->val;
        if(ptr2) data+=ptr2->val;
        ListNode* head = new ListNode(data%10);
        carry=data/10;
        ptr3=head;
        if(ptr1) ptr1=ptr1->next;
        if(ptr2) ptr2=ptr2->next;
        while(ptr1!=NULL || ptr2!=NULL)
        {
            data=carry;  
            if(ptr1) data+=ptr1->val;
            if(ptr2) data+=ptr2->val;
            ListNode *temp = new ListNode(data%10);
            ptr3->next=temp;
            ptr3=temp;
            carry=data/10;
            if(ptr1) ptr1=ptr1->next;
            if(ptr2) ptr2=ptr2->next;
        }
        if(carry>0)
        {
            ListNode* temp = new ListNode(carry);
            ptr3->next=temp;
        }
        ListNode* ans=reverse(head);
        return ans;
    }