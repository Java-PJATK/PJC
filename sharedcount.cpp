#include <iostream>
#include <memory>
using std::shared_ptr; using std::cout; using std::ostream;

class Klazz {
    char c;
public:
    Klazz(char c)
        : c{c} { cout << "Ctor " << c << '\n'; }
    ~Klazz()   { cout << "Dtor " << c << '\n'; }
    friend ostream& operator<<(ostream& s, const Klazz& k) {
        return s << k.c;
    }
};

void f(shared_ptr<Klazz> p) {
    cout << "In f: p=" << *p << ", count="
         << p.use_count() << '\n';
}

int main() {
    shared_ptr<Klazz> p = std::make_shared<Klazz>('A');
    shared_ptr<Klazz> q{new Klazz{'B'}};
    cout << "p=" << *p << ", count=" << p.use_count() << '\n';
    cout << "q=" << *q << ", count=" << q.use_count() << '\n';
    f(p);
    cout << "p=" << *p << ", count=" << p.use_count() << '\n';
    cout << "Now assigning p = q\n";
    p = q;
    cout << "After assignment\n";
    cout << "p=" << *p << ", count=" << p.use_count() << '\n';
    cout << "q=" << *q << ", count=" << q.use_count() << '\n';
    cout << "Exiting from main\n";
}
