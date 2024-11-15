#include <iostream>
using namespace std;

int main() {
    int    i, j;

    i = 19; j = 7; cout << " 19 /  7 = " << i/j << endl;
    i =-19; j = 7; cout << "-19 /  7 = " << i/j << endl;
    i = 19; j =-7; cout << " 19 / -7 = " << i/j << endl;
    i =-19; j =-7; cout << "-19 / -7 = " << i/j << endl;

    i = 19; j = 7; cout << " 19 %  7 = " << i%j << endl;
    i =-19; j = 7; cout << "-19 %  7 = " << i%j << endl;
    i = 19; j =-7; cout << " 19 % -7 = " << i%j << endl;
    i =-19; j =-7; cout << "-19 % -7 = " << i%j << endl;
}
