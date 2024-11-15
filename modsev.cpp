#include <iostream>
using namespace std;

struct Modulo {
    static const int modul;

    int numb;

    Modulo() : numb(0)
    { }

    Modulo(int numb) : numb(numb%modul)
    { }
};
const int Modulo::modul = 7;

Modulo operator+(Modulo m, Modulo n) {
    return Modulo(m.numb + n.numb);
}

int main() {
    Modulo m(5), n(6), k;

    k = m + n;
    cout << m.numb << " + " << n.numb
         << " (mod " << Modulo::modul
         << ") = " << k.numb << endl;

    k = operator+(m,n);
    cout << m.numb << " + " << n.numb
         << " (mod " << Modulo::modul
         << ") = " << k.numb << endl;
}
