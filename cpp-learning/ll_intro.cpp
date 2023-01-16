#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
};

void printList(Node* n) {
    while(n != NULL) {
        cout << n->value << endl;
        n = n->next;
    }
}

int main() {
    cout << "hello" << endl;
    Node* head = new Node();
    head->value = 1;
    Node* second = new Node();
    second->value = 2;
    Node* third = new Node();
    third->value = 3;
    head->next = second;
    second->next = third;
    third->next = NULL;
    printList(head);
    return 0;
}