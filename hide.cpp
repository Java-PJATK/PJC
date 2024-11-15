#include <iostream>

int k;

int main() {
    using std::cout; using std::endl;

    cout << "  k: " <<   k << endl;
    cout << "::k: " << ::k << endl;

    int k = 10;

    cout << "  k: " <<   k << endl;
    cout << "::k: " << ::k << endl;

    ::k = 1;

    cout << "  k: " <<   k << endl;
    cout << "::k: " << ::k << endl;

    {
        int k = 77;
        cout << "Inside block:" << endl;
        cout << "  k: " <<    k << endl;
        cout << "::k: " <<  ::k << endl;
    }

    cout << "After  block:" << endl;
    cout << "  k: " <<   k  << endl;
    cout << "::k: " << ::k  << endl;
}
