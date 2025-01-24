#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class LinkedList {
private:
    Node *head;
public:
    LinkedList() {
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
};

int main() {
    LinkedList l;
    l.insert(34);
    l.insert(35);
    l.insert(54);
    l.insert(45);
    l.insert(55);
    l.transverse();

    l.findMidPoint();

    return 0;
}