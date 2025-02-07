#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Access the top element
    cout << "Top element: " << s.top() << endl;

    // Pop an element
    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    // Check if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Stack size
    cout << "Stack size: " << s.size() << endl;

    return 0;
}
