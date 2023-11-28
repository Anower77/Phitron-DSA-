#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 2, 3, 2, 4, 2, 1, 2, 3};
    replace(v.begin(), v.end(), 2, 100);

    for (int a : v)
    {
        cout << a << " ";
    }
    return 0;
}