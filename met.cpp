#include <iostream>
using namespace std;

class Number {
    double x;
public:
    void    set(double);
    Number& add(double);
    Number& subtract(double);
    Number* multiply(double);
    Number* divide(double);
    void    info(const char*);
};
void Number::set(double x) {
    this->x = x;
}
inline Number& Number::add(double x) {
    this->x += x;
    return *this;
}
inline Number& Number::subtract(double x) {
    this->x -= x;
    return *this;
}
inline Number* Number::multiply(double x) {
    this->x *= x;
    return  this;
}
inline Number* Number::divide(double x) {
    this->x /= x;
    return  this;
}
void Number::info(const char* s) {
    cout << s << " " << x << endl;
}

int main() {
    Number L;

    L.set(10);
    L.info("set               :");
    L.add(5).subtract(7).info("add + subtract    :");
    L.multiply(2)->divide(4)->
                   info("multiply + divide :");
}
