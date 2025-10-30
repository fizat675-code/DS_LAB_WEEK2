#include <iostream>
using namespace std;

// Node structure for the circular linked list
struct Node {
    int data;
    Node* next;
};
int main() {
    int N = 10, M = 3; // 10 people, eliminate every 3rd
     // 1. Build circular List
    Node* head = new Node{1, NULL};
    Node* curr = head;
    for (int i = 2; i <= N; i++) {
        curr->next = new Node{i, NULL};
        curr = curr->next;
    }
    curr->next = head; // make circular
    Node* prev = curr;
    curr = head;

    // 2. Elimination (Josephus Problem simulation)
    while (curr->next != curr) {
        // Move M-1 steps to the person to be eliminated (the M-th person)
        for (int i = 1; i < M; i++) {
            prev = curr;
            curr = curr->next;
        }
        
        // Elimination step
        cout << "Removing: " << curr->data << endl;
        prev->next = curr->next; // Bypass the node to be deleted
        Node* temp = curr;
        curr = curr->next; // Move to the next person to start the count again
        delete temp; // Free the memory of the removed person
    }
    
    // 3. Finding the Survivor
    cout << "Leader is: " << curr->data << endl;
    delete curr; // Free the last node's memory
    return 0;
}