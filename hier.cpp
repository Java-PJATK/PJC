#include <iostream>
using namespace std;

int main() {
    try {
        throw 7;
    }
    catch(double) { cout << "double" << endl; }
    catch(int   ) { cout << "int   " << endl; }
}
