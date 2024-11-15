#include <iostream>
using namespace std;

class A {
    double x;
public:
    A(double x = 1) {
        this->x = x;
        cout << "In default constructor" << endl;
    }

    A(const A& a) {
        x = a.x;
        cout << "In copy-constructor" << endl;
    }
};

A fun(A a) {
    cout << "In function fun" << endl;
    return a;
}

int main() {
    cout << "**1**" << endl;
    A a;

    cout << "**2**" << endl;
    A b = a;

    cout << "**3**" << endl;
    A c(b);

    cout << "**4**" << endl;
    c = fun(a);
}
