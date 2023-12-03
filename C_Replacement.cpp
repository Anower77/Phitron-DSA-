#include<bits/stdc++.h>
using namespace std;

int main() {
   
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0; i<n ;i++)
   {
    cin>>v[i];


    // condition chaeck
    if(v[i]==0)
    {
        v[i]=0;
    }
    else if(v[i]>0)
    {
        replace(v.begin(),v.end(),v[i],1);
    }
    else
    {
        replace(v.begin(),v.end(),v[i],2);
    }
   }







   for(int a:v)
   {
    cout<<a<<" ";
   }
   return 0;
}