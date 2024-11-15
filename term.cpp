#include <iostream>
#include <cmath>      // sqrt
#include <cstdlib>    // exit
#include <exception>
using namespace std;

void termin() {
    cout << "termin: exit(7)" << endl;
    exit(7);
}

double Sqrt(double x) {
    if (x < 0) throw "x < 0";
    return sqrt(x);
}

int main() {
    set_terminate(&termin);

    double z, x;

    x =  16;
    z = Sqrt(x);
    cout << "Sqrt(" << x << ")=" << z << endl;

    x = -16;
    z = Sqrt(x);
    cout << "Sqrt(" << x << ")=" << z << endl;
}
