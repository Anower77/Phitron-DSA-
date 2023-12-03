#include<bits/stdc++.h>
using namespace std;

int main() {
   
   int n;cin>>n;vector<int> v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }




   vector<int>:: iterator it;
   for(int i=0;i<n;i++)
   {
    it = find(v.begin(),v.end(),v[i]);
    int first_index= it-v.begin();
    
    if(it != v.end() && first_index != i)
    {
        cout <<"YES"<<endl;
        return 0;
    }
   }
    
    cout<< "NO"<<endl;




   return 0;
}