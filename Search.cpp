#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// finde index
int findIndex(Node* head, int x) {
    int index = 0;
    Node* tamp = head;

    while (tamp != NULL) {
        if (tamp->val == x) {
            return index;
        }
        tamp = tamp->next;
        index++;
    }

    return -1;
}




int main() {
    int n;cin >> n;

    for (int i = 0; i<n;i++) {
        int val;
        Node* head = NULL;
        Node* tamp = NULL;

        while (true) {
            cin >> val;
            if (val == -1) {
                break;
            }

            Node* newNode = new Node(val);
            if (head == NULL) {
                head = newNode;
                tamp = head;
            } else {
                tamp->next = newNode;
                tamp = tamp->next;
            }
        }

        int x;cin >> x;

        int result = findIndex(head, x);
        cout << result << endl;

      
    }

    return 0;
}
