#include <iostream>
#include "sortinte.h"   // including header
                        // with declarations
using namespace std;

// implementation of function sort
void sort(int a[], int size) {
    int i, indmin = 0;
    for (i = 1; i < size; ++i)
        if (a[i] < a[indmin]) indmin = i;
    if (indmin != 0) {
        int p = a[0];
        a[0] = a[indmin];
        a[indmin] = p;
    }

    for (i = 2; i < size; ++i) {
        int j = i, v = a[i];
        while (v < a[j-1]) {
            a[j] = a[j-1];
            j--;
        }
        if (i != j ) a[j] = v;
    }
}

// implementation of function writarr
void writarr(const int t[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; ++i)
        cout << t[i] << " ";
    cout << "]" << endl;
}
