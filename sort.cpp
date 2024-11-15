#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    vector<string> vec{"Paris", "London", "Warsaw",
                       "Berlin", "Lisbon", "Oslo"};
    auto ini = vec.begin(), fin = vec.end();

    list<string> lis(vec.size()-2);
    copy(ini+1, fin-1, lis.begin());

    sort(ini,fin);
    lis.sort();

    copy(ini, fin,
         ostream_iterator<string>(cout, " "));
    cout << endl;

    copy(lis.begin(),lis.end(),
         ostream_iterator<string>(cout, " "));
    cout << endl;
}
