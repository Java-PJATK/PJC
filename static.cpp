#include <iostream>
using namespace std;

int counter;

void fun1() {
    static int counter;
    counter++;    // local
    ::counter++;  // global
    cout << "Call count   fun1: " << counter << endl;
}

void fun2() {
    static int counter;
    counter++;    // local
    ::counter++;  // global
    cout << "Call count   fun2: " << counter << endl;
}

int main() {
    fun1(); fun1(); fun2(); fun1(); fun2();
    cout << "Call count fun1/2: " << counter << endl;
}
