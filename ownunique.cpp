#include <iostream>
#include <memory>      // smart pointers
#include <string>
#include <utility>     // move

using std::unique_ptr; using std::string;

template <typename T>
struct Del {
    void operator()(T* p) {
        std::cout << "Del deleting " << *p << '\n';
        delete p;
    }
};

template <typename T>
void print(const T* p) {
    if (p) std::cout << *p << " ";
    else   std::cout << "null ";
}

int main() {
    unique_ptr<string, Del<string>>
            p1{new string{"abcde"}, Del<string>{}},
            p2{new string{"vwxyz"}, Del<string>{}};

    print(p1.get()); print(p2.get()); std::cout << '\n';
    std::cout << "Now moving\n";
    p1 = std::move(p2);
    std::cout << "After moving\n";
    print(p1.get()); print(p2.get()); std::cout << '\n';
    std::cout << "Exiting from main\n";
}
