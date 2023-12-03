#include<bits/stdc++.h>
using namespace std;

int main() {
   
   int t;cin>>t;
   while(t--)
   {
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }


        int size=v.size();

        bool ascen_sort=true;

        for(int i=0;i<size-1;i++)
        {
            if(v[i]>v[i+1])
            {
                ascen_sort=false;
                break;;
            }
        }
        if(ascen_sort)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        // cout<<endl;
   }
   return 0;
}