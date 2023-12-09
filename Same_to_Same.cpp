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
// int print_linked_list(Node *head)
// {
//     cout<<endl;
//     Node *tmp = head;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
    
// }


// size
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
     return count;
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
    // int ll_1=print_linked_list(head1);
   
   while (true)
   {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head2,val);
   }
//    int ll_2=print_linked_list(head2);


    Node *tamp1=head1;
    Node *tamp2=head2;
    while (tamp1!=NULL&&tamp2!=NULL)
    {
        if(tamp1->val!=tamp2->val)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        tamp1=tamp1->next;
        tamp2=tamp2->next;
    }

    if(tamp1==NULL&&tamp2==NULL)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


//    if(ll_1==ll_2)
//    {
//     if(size(head1)==size(head2))
//     {
//        if(head1->val==head2->val) 
//        {
//         cout<<"YES"<<endl;
//        }
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//    }
   
   return 0;
}


