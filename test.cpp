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

// insert tail
void insert_at_tail(Node *&head,int v)
{
    Node *newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}


// index find
int index_find(Node *&head,int v)
{
    // Node *index=head;
    // int cnt=0;
    int pos=0;
    Node *tamp=head;

    while (tamp!=NULL)
    {
        if(v==tamp->val) return pos;
        
        // index=index->next;
        // cnt++;
        pos++;
        tamp=tamp->next;
    }

    return -1;
}




int main() 
{
    int n;cin>>n;
    while (n--)
    {
        int val;
        Node *head=NULL;
        while (true)
        {
            cin>>val;
            if(val==-1)break;

            insert_at_tail(head,val);
        }
        int a;cin>>a;
        int pos=0;
        Node *tamp=head;
        bool flag=0;

        while (tamp!=NULL)
        {
            if(a==tamp->val)
            {
                flag=1;
                break;

            }
            pos++;
            tamp=tamp->next;
        }
        
        if(flag)
        {
            cout<<pos<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        // int result=index_find(head,a);
        // cout<<result<<endl;
    }
    
   
   
   return 0;
}