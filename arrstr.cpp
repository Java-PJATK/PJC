#include <iostream>
using namespace std;

int main() {
    const char **v;
    const char *t[] = {"abcd", "efghi", "jklmno" };
    v = t;
    cout << "v+2         = " << v+2         << endl;
    cout << "v[2]        = " << v[2]        << endl;
    cout << "*(v+2)      = " << *(v+2)      << endl;

    cout << "*(*(t+1)+2) = " << *(*(t+1)+2) << endl;
    cout << "t[1][2]     = " << t[1][2]     << endl;

    cout << "*(*(v+1)+2) = " << *(*(v+1)+2) << endl;
    cout << "v[1][2]     = " << v[1][2]     << endl;
}
