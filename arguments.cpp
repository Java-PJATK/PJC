#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    cout << "Program name "         << argv[0]  << endl
         << "Number of arguments: " << argc     << endl;
    for (int i = 1; i < argc; i++)
        cout << "Argument nr " << i       << " is "
                               << argv[i] << endl;
}
