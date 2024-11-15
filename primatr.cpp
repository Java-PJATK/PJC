#include <iostream>
#include <iomanip>
using namespace std;

void printMatrix(ostream&,double**,int,int,const char*);

int main() {
    const int DIM = 5;
    double t[][DIM] = { {    1,  3,    5,       23, 16.42},
                        {4.567,  4,    6,  234.345,    98},
                        {  585, 34,    1,       67,  31.2},
                        {    1,  0,    1, 2345.967, 123.2},
                        {  1.2, 10, 34.1,    5.900,   0.2}
                      };
    double* tab[DIM];
    for (int i = 0; i < 5; i++) tab[i] = t[i];

    char  name[5];
    int  prec = 3;

    cout << "Name: ";
    cin  >> setw(5) >> name;

    printMatrix(cout, tab, DIM, prec, name);
}

void printMatrix(ostream& strm, double* tab[], int size,
                             int prec, const char* name) {
    ios::fmtflags old =
        strm.setf(ios::fixed, ios::floatfield);

    strm << setiosflags(strm.flags() | ios::showpoint)
         << setprecision(prec) << "\nMatrix: " << name
         << "\n\n";

    for (int i = 0; i < size; i++) {
        strm << "ROW " << setfill('0') << setw(2)
             << (i+1)  <<  ":" << setfill(' ');
        for (int j = 0; j < size; j++)
            strm << setw(9) << tab[i][j];
        strm << endl;
    }
    strm << endl << setiosflags(old);
}
