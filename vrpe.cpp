#include <iostream>
using namespace std;

void fun(int, int&, int*);

int main() {
    int a = 1, b = 2, c = 3;

    cout << "Before: a = " << a << " b = " << b
                           << " c = " << c << endl;
    fun(a, b, &c);

    cout << "After : a = " << a << " b = " << b
                           << " c = " << c << endl;
}

void fun(int x, int& y, int* z) {
    x = 2*x;
    y = 3*y;
   *z = 4*(*z);
}
