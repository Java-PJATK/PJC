#include <iostream>
using namespace std;

class Greeting {
    int k1;
public:
    enum Country { PL, DE, FR };
    int k2;
    void fun(Country country) {
        switch (country) {
            case PL:
                cout << "Dzien dobry\n"; k1 = 1; break;
            case DE:
                cout << "Guten Tag\n";   k1 = 2; break;
            case FR:
                cout << "Bonjour\n";     k1 = 3; break;
        }
    }
};

int main() {
    Greeting dd;

    dd.fun(Greeting::DE);

    int *pk1 = &dd.k2 - 1;

    cout << "sizeof(dd) = " << sizeof(dd) << endl;
    cout << "dd.k1      = " << *pk1       << endl;
}
