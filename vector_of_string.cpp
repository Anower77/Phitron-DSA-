#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    // 1st way
    
        for(int i=0;i<v.size();i++)
        {
         cout<<v[i]<<endl;
        }

    // 2nd way

    for (string s : v)
    {
        cout << s << endl;
    }
    return 0;
}