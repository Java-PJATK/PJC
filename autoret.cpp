#include <iostream>
#include <typeinfo>
using namespace std;

  // return type may be deduced when T and U are known
template<typename T, typename U>
decltype(auto) mul(T x, U y) {
    return x*y;
}

int main() {
    auto r1 = mul(2.0,7); // double*int -> double
    std::cout << r1 << " :: " << typeid(r1).name() << "\n";
    auto r2 = mul(2,7L);  //   int*long -> long
    std::cout << r2 << " :: " << typeid(r2).name() << "\n";
}
