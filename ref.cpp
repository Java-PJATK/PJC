#include <iostream>
using namespace std;

int main() {
    double *pd = new double(4.5),
           &rd = *pd;

    cout << "*pd = " << *pd << endl;
    cout << " rd = " <<  rd << endl;
    *pd = 1.5;
    cout << "*pd = " << *pd << endl;
    cout << " rd = " <<  rd << endl;
    delete pd;
}

