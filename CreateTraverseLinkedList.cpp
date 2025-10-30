// Task B1 — Create and Traverse a Linked List
// Explanation: Each node contains data and a pointer to the next node. Traversal continues until NULL.

#include <iostream>
using namespace std;

struct Node {
    int data;    // value stored
    Node* next;  // pointer to next node
};

int main() {
    // Create three nodes manually
    Node* head = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node* third = new Node{30, NULL};

    // Link them
    head->next = second;
    second->next = third;

    // Traverse list from head
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}