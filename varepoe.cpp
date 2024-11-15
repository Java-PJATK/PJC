#include <iostream>
#include <cmath>
using namespace std;

double powers(double&,double*);
int*   square(int*);
int&   funmax(int[],int);

int main() {

      // reference and pointer arguments
    double u = 4, v;
    double cube = powers(u, &v);
    cout << "Cube: " << cube    << "; square: "
         << u << "; sq. root: " << v  << endl;

      // even this is OK
    int i = 4;
    cout << "20? : " << ++*square(&i)+3 << endl;

      // returning reference
    int tab[] = {1,4,6,2};
    cout << "Array before: ";
    for ( i = 0; i < 4; i++ ) cout << tab[i] << " ";
    cout << endl;

    funmax(tab,4) = 0;

    cout << "Array after : ";
    for ( i = 0; i < 4; i++ ) cout << tab[i] << " ";
    cout << endl;
}

double powers(double& u, double* v) {
    double x = u;
    u *= u;
    *v = sqrt(x);
    return u*x;
}

int* square(int* p) {
    *p *= *p;
    return p;
}

int& funmax(int* tab, int ile) {
    int i, ind = 0;
    for ( i = 1; i < ile; i++ )
        if ( tab[i] > tab[ind] ) ind = i;
    return tab[ind];
}
