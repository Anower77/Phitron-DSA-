#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;cin >> a;
    vector<int> v1(a);
    for (int i = 0; i < a; i++) {
        cin >> v1[i];
    }

    int b;cin >> b;
    vector<int> v2(b);
    for (int i = 0; i < b; i++) {
        cin >> v2[i];
    }

    int x;cin >> x;

    v1.resize(a + b);
    for (int i = a - 1; i >= x; i--) {
        v1[i + b] = v1[i];
    }

    for (int i = 0; i < b; i++) {
        v1[x + i] = v2[i];
    }

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    return 0;
}




































// https://chat.openai.com/c/f2c0297f-1410-4edb-97c3-464c3644eaff