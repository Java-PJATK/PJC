#include <iostream>
using namespace std;

int main() {
    cout << "Enter lines of text. Terminate with EOF "
            "character\n(Ctrl-Z in Windows, Ctrl-D "
            "in Linux). Comments\nfrom  \'//\' to "
            "the end of line will be ignored.\n";
    char c;
    while ( cin.get(c) ) {
        if ( c == '/' )
            if ( cin.peek() == '/') {
                cin.ignore(1024,'\n');
                cout << endl;
                continue;
            }
        cout << c;
    }
}
