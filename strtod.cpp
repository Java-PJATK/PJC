#include <iostream>
#include <iomanip>   // setw
#include <cstdlib>   // strtod
#include <cerrno>    // errno
using namespace std;

int main() {
    char*  ptr;
    double x;
    char*  str;

    cout << "ERANGE = " << ERANGE << endl;

    // = 1 = OK
    str = "-1.2e+2xxx";
    x = strtod(str,&ptr);
    cout << "=1=  str = " << str << "; x = "
         << setw(4) << x << "; errno = " << setw(2)
         << errno << "; ptr = " << ptr << endl;

    // = 2 =  Not a Number
    str = "abcdefghij";
    x = strtod(str,&ptr);
    cout << "=2=  str = " << str << "; x = "
         << setw(4) << x << "; errno = " << setw(2)
         << errno << "; ptr = " << ptr << endl;

    // = 3 =  Overflow
    str = "-9e+9999xx";
    x = strtod(str,&ptr);
    cout << "=3=  str = " << str << "; x = "
         << setw(4) << x << "; errno = " << setw(2)
         << errno << "; ptr = " << ptr << endl;

    // = 4 =  Underflow
    str = "-9e-9999xx";
    x = strtod(str,&ptr);
    cout << "=4=  str = " << str << "; x = "
         << setw(4) << x << "; errno = " << setw(2)
         << errno << "; ptr = " << ptr << endl;
}
