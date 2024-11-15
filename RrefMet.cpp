#include <iostream>

struct X {
    void fun()  & { std::cout << "L-value\n"; }
    void fun() && { std::cout << "R-value\n"; }
};

int main() {
    X x{};
    x.fun();    // calling fun() on l-value
    X{}.fun();  // calling fun() on r-value
}
