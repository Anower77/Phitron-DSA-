#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
// Print linked list
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
}
// Insert linked list
void insert_linked_list(Node *head,int pos,int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
int main() {
    Node *head =new Node(10);
    Node *a =new Node(20);
    Node *b =new Node(30);
    Node *c =new Node(40);
    Node *d =new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    cout<<"previous linked list: " ;
    print_linked_list(head);
    
    insert_linked_list(head,4,100);
    cout<<endl;

    cout<<"After linked list   : " ;
    print_linked_list(head);

   return 0;
}