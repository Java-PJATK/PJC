#include <iostream>
using namespace std;

class Name {
    char* name;
public:
    Name(const char* n)
        : name(strcpy(new char[strlen(n)+1], n))
    {
        cout << "Ctor Name: " << name << endl;
    }

    virtual
    ~Name() {
        cout << "Dtor Name: " << name << endl;
        delete [] name;
    }
};

class Full : public Name {
    char* first;
public:
    Full(const char* i, const char* n)
        : Name(n),
          first(strcpy(new char[strlen(i)+1], i))
    {
        cout << "Ctor Full, first: " << first << endl;
    }

    ~Full() {
        cout << "Dtor Full, first: " << first << endl;
        delete [] first;
    }
};

int main() {
    Name* person = new Full("John", "McGuire");
    delete person;
}
