#include <iostream>
using namespace std;

struct Node {
    double wdth;
    double hght;
    Node *next;
};

void put_data(Node* n, double s, double w, Node* next);
void print_list(const Node* n);
void print_list_reverse(const Node* n);

int main() {
    Node A = {4, 44, nullptr};
    Node B, D, *head;

    Node* pC = new Node;

    put_data(&B,3,33,&A);
    put_data(pC,2,22,&B);
    put_data(&D,1,11,pC);

    head = &D;

    print_list(head);
    print_list_reverse(head);

    delete pC;
}

void put_data(Node* n, double s, double w, Node* next) {
    n->wdth = s;
    n->hght = w;
    n->next = next;
}

void print_list(const Node* n) {
    for ( ; n; n = n->next )
        cout << n->wdth << " " << n->hght << "; ";
    cout << endl;
}

void print_list_reverse(const Node* n) {
    if (n == nullptr) return;  // empty list
    if (n->next != nullptr)
        print_list_reverse(n->next);
    cout << n->wdth << " " << n->hght << "; ";
}
