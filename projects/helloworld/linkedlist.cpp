#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    struct node* n;
    struct node* t;
    struct node* h;
    n = new node;
    n->data = 1;
    t = n;
    h = n;
    cout << n->data << endl;
    n = new node;
    n->data = 2; 
    t->next = n;
    t = t->next;
    cout << n->data << endl;
    n = new node;
    n->data = 3;
    t->next = n;
    n->next = NULL;
    cout << n->data << endl;
    delete n;


    return 0;
}