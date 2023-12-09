#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
// insert at head
void insert_at_head(Node *&head,int v)
{
    Node *newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}

// insert at tail
void insert_at_tail(Node *&head,int v)
{
    Node *newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tamp=head;
    while (tamp->next!=NULL)
    {
       tamp=tamp->next;
    }
    tamp->next=newNode;
    
}

// delete at index
void delete_at_index(Node *&head,int index)
{
    if(head==NULL || index<0)return;
    if(index==0)
    {
        Node *tamp=head;
        head=head->next;
        delete tamp;
        return;
    }

    Node *tamp=head;
    int x=0;
    while (tamp!=NULL && x<index-1)
    {
        tamp=tamp->next;
        x++;
    }
    
    // for(int i=0;;i++)
    // {
    // }

    if(tamp==NULL || tamp->next==NULL)return;

    Node *newNode=tamp->next->next;
    delete tamp->next;
    tamp->next=newNode;
}


// print linked list
void print_linked_list(Node *head)
{
    Node *tamp=head;
    while (tamp!=NULL)
    {
        cout<<tamp->val<<" ";
        tamp=tamp->next;
    }
    cout<<endl;
    
}

// main
int main() {
    int q,x,v;cin>>q;

    Node *head=NULL;
   
   for(int i=0;i<q;i++)
   {
    cin>>x>>v;
    if(x==0)
    {
        insert_at_head(head,v);

    }
    else if(x==1)
    {
        insert_at_tail(head,v);
    }
    else if(x==2)
    {
        delete_at_index(head,v);
    }

    print_linked_list(head);
   }
   
   return 0;
}