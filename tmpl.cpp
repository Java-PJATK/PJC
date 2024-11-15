#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
T larger(T k1, T k2) {
    cout << "T=" << typeid(T).name() << " ";
    return k1 < k2 ? k2 : k1;
}

double larger(double k1, double k2) {
    cout << "Spec. double ";
    return k1 < k2 ? k2 : k1;
}

template<>
short larger<short>(short k1, short k2) {
    cout << "Spec. short ";
    return k1 < k2 ? k2 : k1;
}

template<>
long larger<long>(long k1, long k2) = delete;

int main() {
    short s1 = 4, s2 = 5;

    cout << larger(1.5,2.5)    << endl;
    cout << larger(111,222)    << endl;
    cout << larger('a','d')    << endl;
    cout << larger<int>(s1,s2) << endl;
    cout << larger(30L,50L)    << endl;
}
