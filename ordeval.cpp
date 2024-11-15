#include <iostream>
using namespace std;

int zzz;     // global, initialized with 0

int fun1() {
    return zzz += 1;
}

int fun100() {
    return zzz += 100;
}

int main() {
    cout << fun1() << " " << fun100() << endl;
}
