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
void insert_at_tail(Node *&head,Node *&tail,int v)
{
    Node *newNode =new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

// remove duplicates 
void remove_duplicates(Node *head)
{
    Node *index=head;
    while (index)
    {
        Node *nextNode=index;
        while (nextNode->next)
        {
            if(nextNode->next->val==index->val)
            {
                Node *tamp=nextNode->next;
                nextNode->next=nextNode->next->next;
                delete tamp;
            }
            else
            {
                nextNode=nextNode->next;
            }

        }
        

        index=index->next;
    }
    
}

// print liked list 
void print_linked_list(Node *head)
{
    Node *tamp=head;
    while (tamp!=NULL)
    {
        cout<<tamp->val<<" ";
        tamp=tamp->next;
    }
    
}

int main() {
   Node *head=NULL;
   Node *tail=NULL;
   int val;

   while (true)
   {
    cin>>val;
    if(val==-1) break;

    insert_at_tail(head,tail,val);
   }

   remove_duplicates(head);

   print_linked_list(head);
   
   return 0;
}












