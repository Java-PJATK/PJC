#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template <typename Data, int size>
class Stack {
    Data* data;
    int   top;
public:
    Stack();
    bool empty() const;
    void push(Data);
    Data pop();
    ~Stack();
};

template <typename Data, int size>
Stack<Data,size>::Stack() {
    data = new Data[size];
    top = 0;
}

template <typename Data, int size>
inline bool Stack<Data,size>::empty() const {
    return top == 0;
}

template <typename Data, int size>
inline void Stack<Data,size>::push(Data dat) {
    data[top++] = dat;
}

template <typename Data, int size>
inline Data Stack<Data,size>::pop() {
    return data[--top];
}

template <typename Data, int size>
inline Stack<Data,size>::~Stack() {
    delete [] data;
}

  // template of a global function
template <typename Data, int size>
void clear(Stack<Data,size>* p_stos) {
    cout << "Stack of type " << typeid(Data).name() << ": ";
    while ( ! p_stos->empty() ) {
        cout << p_stos->pop() << " ";
    }
    cout << endl;
}

int main() {
    Stack<int,20> stack_i;
    stack_i.push(11);
    stack_i.push(36);
    stack_i.push(49);
    stack_i.push(92);

    Stack<string,15> stack_s;
    stack_s.push("Alice");
    stack_s.push("Emmy");
    stack_s.push("Winnie");
    stack_s.push("Una");

    clear(&stack_i);
    clear(&stack_s);
}
