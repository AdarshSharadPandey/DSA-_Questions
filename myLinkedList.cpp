#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int value;
    Node* next;
    Node(int val)
    {
        value=val;
        next=NULL;
    }
};

int CountNodes(Node* head)
{
    Node *ptr=head;
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}

Node* insertAtBegin(Node* head, int val)
{
    Node *temp=new Node(val);
    temp->next=head;
    return temp;
}

Node* insertAtEnd(Node* head, int val)
{
    Node *ptr=head;
    while(ptr->next!=NULL)
        ptr=ptr->next;
    Node *temp=new Node(val);
    ptr->next=temp;
    return head;
}

Node* deleteFirst(Node* head)
{
    Node *ptr=head->next;
    delete(head);
    return ptr;
}

Node* deleteEnd(Node* head)
{
    Node *ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    delete(ptr->next);
    ptr->next=NULL;
    return head;
}

void DisplayLL(Node* head)
{
    Node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->value<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}

Node* ReverseLinkedList(Node* head)
{
    Node *current=head,*prev=NULL,*Next=NULL;
    while(current!=NULL)
    {
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
    }
    return prev;
}

int main()
{
    Node *head=new Node(4);
    Node *temp1=new Node(5);
    Node *temp2=new Node(8);
    Node *temp3=new Node(3);
    Node *temp4=new Node(5);
    Node *tail=new Node(2);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=tail;
    DisplayLL(head);
    Node* newHead = ReverseLinkedList(head);
    DisplayLL(newHead);
    cout<<CountNodes(newHead)<<endl;
    newHead=insertAtBegin(newHead,9);
    newHead=insertAtBegin(newHead,11);
    newHead=insertAtEnd(newHead,15);
    DisplayLL(newHead);
    cout<<CountNodes(newHead)<<endl;
    newHead=deleteFirst(newHead);
    DisplayLL(newHead);
    newHead=deleteEnd(newHead);
    DisplayLL(newHead);
}
