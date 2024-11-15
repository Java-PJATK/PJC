#include <iostream>
#include <string>

template <typename T>
struct Node {
    T     data;
    Node* next;
};

template <typename T>
void push(Node<T>*& head, T d) {
    head = new Node<T>{d, head};
}

template <typename T>
T pop(Node<T>*& head) {
    T d{head->data};
    Node<T>* n{head->next};
    delete head;
    head = n;
    return d;
}

template <typename T>
bool empty(Node<T>* head) {
    return head == nullptr;
}

int main() {
      // "something"s is now a literal of type std::string
    using namespace std::literals;

    Node<int>* headI{nullptr};
    Node<std::string>* headS{nullptr};
    push(headI, 3); push(headS, "3"s);
    push(headI, 2); push(headS, "2"s);
    push(headI, 1); push(headS, "1"s);
                    push(headS, "0"s);
    while(!empty(headI))
        std::cout << pop(headI) << " ";
    std::cout << std::endl;

    while(!empty(headS))
        std::cout << pop(headS) << " ";
    std::cout << std::endl;
}
