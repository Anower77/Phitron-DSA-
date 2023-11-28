#include <bits/stdc++.h>
using namespace std;

int main()
{
    // this is the first way to take input

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (int val : v)
    {
        cout << val << " ";
    }

    // this is the second way to take input
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}