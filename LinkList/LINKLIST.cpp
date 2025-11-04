#include <iostream>
using namespace std;

struct Node
{
    int Data;
    Node* next;
    Node(int val)
    {
        Data = val;
        next=NULL;
    }

};

void printLinkList(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout << temp->Data<< "->";
        temp=temp->next;
    }
    cout<< "NULL";
}

void insertAtBegining(Node*& head,int val)
{
    Node* newnode = new Node(val);
    newnode->next=head;
    head=newnode;
}

void insertAtLast(Node*& head,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insertAtPosition(Node*& head,int pos,int val)
{
    if(pos==1)
    {
        insertAtBegining(head,val);
        return;
    }
    Node* newnode = new Node(val);
    Node* temp=head;
    for(int i=0;i<pos-1&& temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL) return;
    newnode->next=temp->next;
    temp->next= newnode;
}

void deleteAtBeginning(Node*& head)
{
    if(head==NULL) return;
    Node* temp=head;
    head= head->next;
    delete temp;
}

void deleteAtLast(Node*& head)
{
    if(head==NULL) return;
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    delete temp->next;
    temp->next=NULL;
}

void deleteAtposition(Node*& head,int pos)
{
    if(head==NULL) return;
    if(pos==1)
    {
        deleteAtBeginning(head);
        return;
    }
    Node* temp=head;
    for(int i=0;i<pos-1&& temp!=NULL;i++)
        temp=temp->next;
    if(temp->next==NULL) return;
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;       
}

Node* reverse(Node* head)
{
    Node* prev =NULL;
    Node* cur=head;
    Node* next=NULL;
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;

}

int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    head->next=second;
    insertAtBegining(head,30);
    insertAtLast(head,40);
    printLinkList(head);
}
