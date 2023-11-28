#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v;        // type 01
    // vector<int> v(5);     // type 02
    // vector<int> v(5, 10); // type 03

    // type 04
    // vector<int> v2(5, 3);
    // vector<int> v(v2);

    // type 05
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v(a, a + 7);

    // vector<int> v = {2, 10, 66}; // type 06

    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size();
    return 0;
}