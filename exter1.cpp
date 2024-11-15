#include <iostream>
using namespace std;

double x1 = 11;
extern double x2;
void func();

int main()
{
    cout << "main: x1 = " << x1 << endl;
    cout << "main: x2 = " << x2 << endl;
    func();
}
