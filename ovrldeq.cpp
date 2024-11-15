#include <iostream>
#include <cstring>   // strcpy, strlen
using namespace std;

struct A {
    char* name;

    A() : name(new char[1]) {
        cerr << "dfctor: " << (void*)name << endl;
        name[0] = '\0';
    }

    A(const char* s)
        : name(strcpy(new char[strlen(s)+1],s)) {
        cerr << "  ctor: " << (void*)name << endl;
    }

    A(const A& k)
        : name(strcpy(new char[strlen(k.name)+1],k.name)) {
        cerr << "cpctor: " << (void*)name << endl;
    }

    A& operator=(const A& k) {

        if (this == &k) return *this;

        cerr << "delete: " << (void*)name << endl;
        delete [] name;
        name = strcpy(new char[strlen(k.name)+1],k.name);
        cerr << "   op=: " << (void*)name << endl;
        return *this;
    }

    ~A() {
        cerr << "  dtor: "  << (void*)name << endl;
        delete [] name;
    }
};

A ob1("ob1");

int main() {
    cerr << "MAIN" << endl;
    A ob2(ob1);
    A ob3 = ob2; // copy-ctor

    ob1 = ob3;

    cerr << "  ob1.name: " << (void*)ob1.name << endl;
    cerr << "  ob3.name: " << (void*)ob3.name << endl;

    cerr << "THE END" << endl;
}
