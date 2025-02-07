#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    void deleteNode(int key) {
        Node* temp = head, *prev = nullptr;
        if (temp && temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }
        while (temp && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        if (!temp) return;
        prev->next = temp->next;
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.deleteNode(20);
    list.display();
}
