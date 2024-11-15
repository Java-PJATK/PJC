/*
 * Test of installation. The program should print the names
 * of four programming languages (sorted alphabetically).
 */
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    vector<string> vs{"Python", "Haskell",
    "C++",    "Java"};
    sort(vs.begin(),vs.end());
    for (const auto& e : vs) cout << e << " ";
    cout << endl;
}
