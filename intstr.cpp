#include <iostream>
#include <sstream>
using namespace std;

void words(const string& s) {
    istringstream istr(s);

    string word;
    while ( istr >> word )
        cout << word << endl;
}

int main() {
    string s = "Bach Haydn";
    ostringstream ostr(s, ios::ate);
    ostr << " Chopin";
    string s1 = ostr.str();
    words(s1);
}
