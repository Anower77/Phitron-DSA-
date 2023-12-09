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
// insert at tail
void insert_at_tail(Node *&head,int v)
{
    Node *newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tmp= head;
    while (tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
    
}


// print linked list
void print_linked_list(Node *head)
{
    cout<<endl;
    Node *tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
    
}
int main() {
   int val;
   Node *head1=NULL;
   Node *head2=NULL;
   while (true)
   {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head1,val);
   }
   print_linked_list(head1);
   
   while (true)
   {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head2,val);
   }
   print_linked_list(head2);
   
   return 0;
}


