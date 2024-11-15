#include <iostream>
using namespace std;

int main() {
    double x, y, *pmin, *pmax;
    cout << "Enter two numbers: ";
    cin  >> x >> y;
    if (x < y) {
        pmin = &x; pmax = &y;
    } else {
        pmin = &y; pmax = &x;
    }
    cout << "Min = " << *pmin << endl;
    cout << "Max = " << *pmax << endl;
}
