#include <iostream>
#include <fstream>   // ifstream, ofstream
#include <string>
#include <sstream>   // stringstream
using namespace std;

int main() {
    string line{};

    ofstream outf{"RWfile.out"};
    for (ifstream in{"RWfile.dat"}; getline(in, line);) {
        cout << line  << "\n";
        string name;
        int height;
        double weight;
        istringstream str{line};
        str >> name >> height >> weight;
        cout << name << ": height=" << height
             << ", weight=" << weight << '\n';
        outf << name << ": height=" << height
             << ", weight=" << weight << '\n';
    }
    outf.close();

      // again but in a while loop
    ifstream in{"RWfile.dat"};
    while (getline(in, line)) {
        cout << line  << "\n";
    }
}
