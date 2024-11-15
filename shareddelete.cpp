#include <iostream>
#include <memory>
using std::shared_ptr;

template< typename T >
struct arrdel {
    void operator ()(T const *p) { delete[] p; }
};

int main() {
    shared_ptr<int> sp(new int(1));

      // pointer to int[] array - custom deleter
    shared_ptr<int> p1(new int[10], arrdel<int>());
      // ... or lambda
    shared_ptr<int> p2(new int[10'000'000],
                       [](int *p) { delete[] p; });
      // ... or the one from the library
    shared_ptr<int> p3(new int[3]{1, 2, 3},
                       std::default_delete<int[]>());
    std::cout << p3.get()[2] << " " << *p3 << std::endl;

      // since c++17 this will work
    shared_ptr<int[]> p4(new int[3]{4, 5, 6});
    std::cout << p4[2] << std::endl;
}
