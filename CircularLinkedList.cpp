// Part D – Circular Linked List & Josephus Problem (30 min)
// Task D1 — Circular List Traversal
// Explanation: Last node points back to head. Traversal must be controlled to avoid infinite loops.

#include <iostream>
using namespace std;

struct CNode {
    int data;
    CNode* next;
};

int main() {
    int n = 5;
    CNode* head = new CNode{1, NULL};
    CNode* curr = head;

    // Create circular list
    for (int i = 2; i <= n; i++) {
        curr->next = new CNode{i, NULL};
        curr = curr->next;
    }
    curr->next = head; // last node points back to head

    // Print circular list (only once around)
    cout << "Circular List: ";
    curr = head;
    for (int i = 0; i < n; i++) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;

    return 0;
}