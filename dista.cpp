#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main() {
    vector<string> vec;

#if   defined(__WIN32)
    cout << "Enter words (^Z ends):\n";
#elif defined(__linux)
    cout << "Enter words (^D ends):\n";
#else
    #error Unknown system
#endif

    string s;
    while ( cin >> s ) vec.push_back(s);
    cin.clear();

    list<string> lis(vec.begin(),vec.end());

    cout << "Word to find: ";
    cin  >> s;

    auto sit = vec.cbegin();
    auto lit = lis.cbegin();

      // vector
    for ( ; sit != vec.cend(); ++sit)
        if ( *sit == s ) break;
    if ( sit != vec.cend() )
        cout << "(vec) Word " << s << " on position "
             << sit - vec.cbegin() << endl;
    else
        cout << "Word " << s << " did not appear" << endl;

      // list
    for ( ; lit != lis.cend(); ++lit)
        if ( *lit == s ) break;
    if ( lit != lis.end() )
        cout << "(lis) Word " << s << " on position "
             << distance(lis.cbegin(),lit) << endl;
    else
        cout << "Word " << s << " did not appear" << endl;
}
