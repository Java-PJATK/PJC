#include <iostream>
#include <cstring>
using namespace std;

class Person1 { // not a very good class...
public:
    int    age;
    char* name;
    Person1(int w, const char* n) {
        age  = w;
        name = new char[strlen(n)+1];
        strcpy(name,n);
    }
};

int main() {
    char name[] = "Bill";

    Person1 bill(29, name);

    name[0] = 'J';

    cout << "From original: " << name      << endl;
    cout << "From object  : " << bill.name << endl;
}
