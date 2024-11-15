#include <iostream>
#include <strstream>
#include <cstdlib>   // free
using namespace std;

int main() {
    // "rubber" version
    ostrstream napis1;
    napis1 << "Beginning, " << "continuation, "
           << "end."        << ends;
    char* n = napis1.str();
    cout << "The string is: " << n << endl;
    free(n);

    // version with array
    char tab[30];
    ostrstream napis2(tab,sizeof(tab));
    napis2 << "Maggie " << "Kathy " << "Mary" << ends;
    cout << tab << endl;
}
