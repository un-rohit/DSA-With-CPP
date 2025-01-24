#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class linkedlist {
private:
    Node *head; 
public:
    linkedlist() {
        head = nullptr; 
    }

    void insert(int value) {
        Node *n = new Node();
        n->data = value;
        n->next = nullptr;

        if (head == nullptr) {
            head = n; 
        } else {
            Node *temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; 
            }
            temp->next = n;
        }
    }

    void del(int value) {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        if (head->data == value) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Value not found in the list." << endl;
            return;
        }

        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    void transverse() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->data << " "; 
            temp = temp->next; 
        }
        cout << endl;
    }

    void findMidPoint() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Midpoint value: " << slow->data << endl;
    }
};

int main() {
    linkedlist l;
    l.insert(34);
    l.insert(35);
    l.insert(54);
    l.transverse();

    l.del(54); // Pass the value to be deleted
    l.transverse();

    l.insert(45);
    l.insert(55);
    l.transverse();

    l.findMidPoint(); // Find the midpoint of the list

    return 0;
}
