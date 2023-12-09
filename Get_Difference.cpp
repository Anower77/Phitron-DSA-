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


// finde difference
int findDifference(Node* head) {
    if (head == NULL) {
        return 0;
    }

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    Node* index = head;
    while (index != NULL) {
        min_val = min(min_val, index->val);
        max_val = max(max_val, index->val);
        index = index->next;
    }

    return max_val - min_val;
}

// main function
int main() {
    int val;
    Node* head = NULL;
    Node* index = NULL;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }

        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            index = head;
        } else {
            index->next = newNode;
            index = index->next;
        }
    }

    int result = findDifference(head);
    cout << result << endl;

    index = head;
    while (index != NULL) {
        Node* temp = index;
        index = index->next;
        delete temp;
    }

    return 0;
}
