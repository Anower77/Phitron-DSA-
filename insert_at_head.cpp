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


// Linked List (Head)
void insert_at_tail(Node *&head, int v)
{
    Node *newNode =new Node(v);
    if(head==NULL)
    {
        head = newNode;
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }

    Node *tmp= head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    //last node
    tmp->next=newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
}

// New Linked List 
void print_linked_list(Node *head)
{
    cout<<endl;
    cout<<"Your linked list: ";
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}

// Insert value any position
void insert_at_postion(Node *head,int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted at position "<<pos<<endl<<endl;

}

// Insert value head position
void insert_at_head(Node *&head,int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}
int main() {
  Node* head = NULL;
  while(true)
  {
    cout<<"Option 1: Insert a tail: "<<endl;
    cout<<"Option 2: Print linked list: "<<endl;
    cout<<"Option 3: Insert at any position: "<<endl;
    cout<<"Option 4: Insert at head: "<<endl;
    cout<<"Option 5: Terminate: "<<endl;
    
    int op;cin>>op;
    if(op==1)
    {
        cout<<"Please enter value: ";
        int v;cin>>v;
        insert_at_tail(head,v);
    } 
    else if(op==2)
    {
        print_linked_list(head);
    }
    else if(op==3)
    {
        int pos,v;
        cout<<"Enter positiom: ";
        cin>>pos;
        cout<<"Enter value: ";
        cin>>v;
        if(pos==0)
        {
            insert_at_head(head,v);
        }
        else
        {
            insert_at_postion(head,pos,v);
        }
    }
    else if(op==4)
    {
        int v;
        cout<<"Enter value: ";
        cin>>v;
        insert_at_head(head,v);
    }
    else if(op==5)
    {
        break;
    }
  }
   return 0;
}