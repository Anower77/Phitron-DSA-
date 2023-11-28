#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 2, 3, 2, 4, 2, 1, 2, 3};
    vector<int>::iterator it;

    it = find(v.begin(), v.end(), 100);

    if (it == v.end())
        cout << "Found" << endl;
    else
        cout << "NOT Found" << endl;

    return 0;
}