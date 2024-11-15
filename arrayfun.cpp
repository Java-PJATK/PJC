#include <iostream>
#include <cmath>
using namespace std;

typedef double (*ARRFUN[])(double);
// typedef const char *ARRNAM[];
using ARRNAM = const char* [];  // C++11

void funprnt(ARRFUN,ARRNAM,double);

int main() {
    const double PIover4 = atan(1.);

    ARRFUN arrfun = { sin,  cos,  tan };
    ARRNAM arrnam = {"sin","cos","tan"};

    cout << "sizeof(ARRFUN) = " << sizeof(arrfun) << endl
         << "sizeof(ARRNAM) = " << sizeof(arrnam) << "\n\n";

    for (int i = 0; i < 3; i++) {
        cout << "arrfun[" <<   i   << "](pi/4) = "
             << arrfun[i](PIover4) << " ("
             << arrnam[i]          << ")\n";
    }

    funprnt(arrfun,arrnam,PIover4);
}

void funprnt(ARRFUN f, ARRNAM t, double x) {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << "funprnt: " << t[i] << " "
             << "value    " << f[i](x) << endl;
    }
}
