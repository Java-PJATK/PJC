#include <iostream>
using namespace std;

int main() {
    int k = 5;
    int &refk = k;

    cout << "refk = " << refk << endl;
    cout << "   k = " << k    << endl;

    k = 7;

    cout << "refk = " << refk << endl;
    cout << "   k = " << k    << endl;

    refk = 9;

    cout << "refk = " << refk << endl;
    cout << "   k = " << k    << endl;
}
