#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    
    ~LinkedList() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert\n";
        cout << "2. Display\n";
        cout << "3. Reverse\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to insert: ";
                cin >> value;
                list.insert(value);
                break;
            case 2:
                cout << "Linked list: ";
                list.display();
                break;
            case 3:
                list.reverse();
                cout << "Linked list reversed.\n";
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}