#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<string> s(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    for(string sal:s)
    {
        cout<<sal<<endl;
    }
    return 0;
}