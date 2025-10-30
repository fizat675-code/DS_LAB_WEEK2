// Task B2 — Insert and Delete in Singly Linked List
// Explanation:
// • Insert at head: Make new node point to old head, update head.
// • Delete head: Move head forward, free old node.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert new node at beginning
void insertAtHead(Node*& head, int val) {
    Node* n = new Node{val, head};
    head = n;
}

// Delete first node
void deleteHead(Node*& head) {
    if (!head) return;  // empty list check
    Node* temp = head;
    head = head->next;  // move head
    delete temp;        // free old node
}

// Print list
void printList(Node* head) {
    cout << "List: ";
    for (Node* cur = head; cur != NULL; cur = cur->next)
        cout << cur->data << " ";
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 30); // list: 30
    insertAtHead(head, 20); // list: 20 -> 30
    insertAtHead(head, 10); // list: 10 -> 20 -> 30
    printList(head);

    deleteHead(head);       // remove 10
    printList(head);

    return 0;
}