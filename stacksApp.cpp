#include <iostream>
#include "mySTACK.h"

int main() {

    mySTACKS::STACK* stack;

    stack = mySTACKS::STACK::getInstance(120);
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    std::cout << stack->pop() << " ";
    std::cout << stack->pop() << std::endl;
    delete stack;

    stack = mySTACKS::STACK::getInstance(50);
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    std::cout << stack->pop() << " ";
    std::cout << stack->pop() << std::endl;
    delete stack;
}
