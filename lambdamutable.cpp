#include <iomanip>     // setw
#include <iostream>

int main() {
    using std::cout; using std::endl; using std::setw;

    auto fibo = [fp=-1, fn=1] () mutable  {
             int d = fp; fp = fn; return fn += d;
         };

    auto triangle = [t=0, i=0] () mutable {
             return t += i++;
         };

    for (size_t i = 0; i <= 10; ++i)
        cout << setw(2) << i << ":" << setw(3) << fibo()
             << setw(3) << triangle() << endl;
}
