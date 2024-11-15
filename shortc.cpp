#include <iostream>
using namespace std;

bool fun(int k) {
    k = k - 3;
    cout << "Fun returns " << k << endl;
    return k;
}

int main() {
    if ( fun(1) && fun(2) && fun(3) && fun(4) )
        cout << "AND true " << endl;
    else
        cout << "AND false" << endl;

    if ( fun(1) || fun(2) || fun(3) || fun(4) )
        cout << "OR  true " << endl;
    else
        cout << "OR  false" << endl;
}
