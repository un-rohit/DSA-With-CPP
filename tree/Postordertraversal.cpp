#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) {
       data = x;
       left = right = nullptr;
    }
};


void postorderTraversal(Node* node) {
  

    if (node == nullptr)
        return;
  
    
    postorderTraversal(node->left);
  
    // Recur on the right subtree
    postorderTraversal(node->right);
  
    // Visit the current node
    cout << node->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    postorderTraversal(root);
    return 0;
}