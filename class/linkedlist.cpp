#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *n = new Node();

class linkedlist
{
private:
    Node *head;
public:
    linkedlist(){
    head = nullptr;
    }
    void insert(int value){
      Node *newNode =new Node();
      newNode->data =value;
      newNode->next = NULL;
      
    }

    void del(){

    }

    void transverse(){

    }
};

int main()
{
   linkedlist l;
   l.insert(34);
   l.insert(35);
   l.insert(54);
   l.transverse();

    return 0;
}