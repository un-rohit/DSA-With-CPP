#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    ListNode* head;
    LinkedList() : head(nullptr) {}

    void append(int val) {
        if (!head) {
            head = new ListNode(val);
        } else {
            ListNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new ListNode(val);
        }
    }

    vector<int> findCriticalPoints() {
        vector<int> criticalPoints;
        if (!head || !head->next || !head->next->next) {
            return criticalPoints;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = curr->next;
        int index = 1;

        while (next) {
            if ((curr->val > prev->val && curr->val > next->val) || 
                (curr->val < prev->val && curr->val < next->val)) {
                criticalPoints.push_back(index);
            }
            prev = curr;
            curr = next;
            next = next->next;
            index++;
        }

        return criticalPoints;
    }
};

int main() {
    LinkedList list;
    list.append(1);
    list.append(3);
    list.append(2);
    list.append(4);
    list.append(1);

    vector<int> criticalPoints = list.findCriticalPoints();
    if (criticalPoints.empty()) {
        cout << "No critical points found." << endl;
    } else {
        cout << "Critical points at indices: ";
        for (int index : criticalPoints) {
            cout << index << " ";
        }
        cout << endl;
    }

    return 0;
}