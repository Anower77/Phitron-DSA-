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
// recursion
void print_recursive(Node *n)
{
    if(n==NULL) return;
    cout<<n->val<<" ";
    print_recursive(n->next);
}
// reverse
void print_reverse(Node *n)
{
    if(n==NULL) return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}
// main
int main() {
   Node *head = new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *c = new Node(40);
   Node *d = new Node(50);
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;

   cout<<"recursion: ";
   print_recursive(head);
   cout<<endl;
   cout<<"reverse: ";
   print_reverse(head);
   return 0;
}