// Part C – Doubly Linked List (25 min)
// Task C1 — Build and Traverse DLL
// Explanation: A doubly linked list allows forward and backward traversal using next and prev.

#include <iostream>
using namespace std;

struct DNode {
    int data;
    DNode* next;
    DNode* prev;
};

int main() {
    // Create nodes
    DNode* head = new DNode{10, NULL, NULL};
    DNode* second = new DNode{20, NULL, head};
    head->next = second;
    DNode* third = new DNode{30, NULL, second};
    second->next = third;

    // Forward traversal
    cout << "Forward: ";
    for (DNode* cur = head; cur != NULL; cur = cur->next)
        cout << cur->data << " ";
    cout << endl;

    // Backward traversal
    cout << "Backward: ";
    for (DNode* cur = third; cur != NULL; cur = cur->prev)
        cout << cur->data << " ";
    cout << endl;

    return 0;
}