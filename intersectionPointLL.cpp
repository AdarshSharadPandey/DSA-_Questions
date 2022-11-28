    int countNodes(Node* head)
    {
        Node* ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        return count;
    }
    int intersectPoint(Node* head1, Node* head2)
    {
        int m=countNodes(head1),n=countNodes(head2);
        Node *ptr1=head1,*ptr2=head2;
        if(m>n)
        {
            for(int i=1;i<=m-n;i++)
                ptr1=ptr1->next;
        }
        else if(m<n)
        {
            for(int i=1;i<=n-m;i++)
                ptr2=ptr2->next;
        }
        while(ptr1!=NULL)
        {
            if(ptr1==ptr2)
                return ptr2->data;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }