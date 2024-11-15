#include <iostream>
using namespace std;

class STACK
{
public:
    virtual void push(int) = 0;
    virtual int pop()      = 0;
    virtual bool empty() const = 0;
    static STACK* getInstance(int);
    virtual ~STACK() { }
};

class ListStack: public STACK {

    struct Node {
        int   data;
        Node* next;
        Node(int data, Node* next)
            : data(data), next(next)
        { }
    };

    Node* head;

    ListStack() {
        head = nullptr;
        cerr << "Creating ListStack" << endl;
    }

    ListStack(const ListStack&) { }
    void operator=(ListStack&) { }

public:
    friend STACK* STACK::getInstance(int);

    int pop() {
        int   data = head->data;
        Node* temp = head->next;
        delete head;
        head = temp;
        return data;
    }

    void push(int data) {
        head = new Node(data, head);
    }

    bool empty() const {
        return head == nullptr;
    }

    ~ListStack() {
        cerr << "Deleting ListStack" << endl;
        while (head) {
            Node* node = head;
            head = head->next;
            cerr << " deleting node " << node->data <<endl;
            delete node;
        }
    }
};

class ArrayStack : public STACK {

    int  top;
    int* arr;
    enum {MAX_SIZE = 100};

    ArrayStack() {
        top = 0;
        arr = new int[MAX_SIZE];
        cerr << "Creating ArrayStack" << endl;
    }

    ArrayStack(const ArrayStack&) { }
    void operator=(ArrayStack&) { }

public:
    friend STACK* STACK::getInstance(int);

    void push(int data) {
        arr[top++] = data;
    }

    int pop() {
        return arr[--top];
    }

    bool empty() const {
        return top == 0;
    }

    ~ArrayStack() {
        cerr << "Deleting ArrayStack with " << top
             << " elements remaining" << endl;
        delete [] arr;
    }
};

STACK* STACK::getInstance(int size) {
    if (size > 100)
        return new ListStack();
    else
        return new ArrayStack();
}

int main() {

    STACK* stack;

    stack = STACK::getInstance(120);
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    cerr << "pop " << stack->pop() << endl;
    cerr << "pop " << stack->pop() << endl;
    delete stack;

    stack = STACK::getInstance(50);
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    cerr << "pop " << stack->pop() << endl;
    cerr << "pop " << stack->pop() << endl;
    delete stack;
}
