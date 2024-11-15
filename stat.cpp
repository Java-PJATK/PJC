#include <iostream>
using namespace std;

int stat = 10;

void fun() {
    static int stat;
    cout << "local  stat " << stat++ << endl;
    cout << "global stat " << ::stat << endl;
    {
        static int stat;
        cout << "block  stat " << stat--
                               << "\n\n";
    }
}

int main() {
    fun();
    fun();
    fun();
}
