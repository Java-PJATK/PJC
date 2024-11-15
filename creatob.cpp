#include <iostream>
using namespace std;

class AClass {
    static char ID;
    int          a;
    char        id;
public:
    AClass() {
        id = ID++;
        a  = 0;
        cout << "Ctor()    " << id << a << endl;
    }

    AClass(int aa) {
        id = ID++;
        a  = aa;
        cout << "Ctor(int) " << id << a << endl;
    }

    ~AClass() {
        cout << "Dtor      " << id << a << endl;
    }
};
char AClass::ID = 'A';

AClass k1;                           // <- A
//AClass ka();  // WRONG!
//AClass ka{};  //    OK!

int main() {
    cout << "Entering \'main\'" << endl;

    // AClass kb = AClass; // WRONG!
    {
        AClass k3 = AClass();        // <- C
        AClass k4 = AClass(4);       // <- D
    }

    AClass* pk5 = new AClass;        // <- E
    AClass* pk6 = new AClass();      // <- F
    AClass* pk7 = new AClass(7);     // <- G

    delete pk6;
    delete pk7;

    cout << "Leaving  \'main\'" << endl;
}

AClass k2(2);                       // <- B
