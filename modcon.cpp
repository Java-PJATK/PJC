#include <iostream>
using namespace std;

class Modulo {
    int numb;
public:
    static int modul;

    Modulo() : numb(0) { }

    Modulo(int numb) : numb(numb%modul) { }

    friend Modulo operator+(Modulo,Modulo);
    friend ostream& operator<<(ostream&,const Modulo&);
};
int Modulo::modul = 7;

Modulo operator+(Modulo m, Modulo n) {
    return Modulo(m.numb + n.numb);
}

ostream& operator<<(ostream& str, const Modulo& m) {
    return str << m.numb;
}

int main() {

    Modulo m(5), n(6), k;

    k = m + n;
    cout << "m + n (mod " << Modulo::modul
         << ") = "        << k << endl;

    k = m + 6;
    cout << "m + 6 (mod " << Modulo::modul
         << ") = "        << k << endl;

    k = 6 + m;
    cout << "6 + m (mod " << Modulo::modul
         << ") = "        << k << endl;
}
