#include <iostream>
#include <cstring>
using namespace std;

void  first_last(char**,char*&,char*&);

int main() {

    char *nam[] = { "Cathy",     "Maggi",
                    "Alice",     "Wanda",
                    "Wendy", "Catharina", "" },
                  *p,*q;

    first_last(nam,p,q);

    cout << "First: " << p << endl
         << "Last : " << q << endl;
}

void first_last(char** s, char*& p, char*& q) {
    p = q = *s;
    while ( **++s ) {
        if ( strcmp(*s, p) < 0 ) p = *s;
        if ( strcmp(*s, q) > 0 ) q = *s;
    }
}
