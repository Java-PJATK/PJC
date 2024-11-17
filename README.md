# PJC

[PJC] C++ code examples



P1: testInst.cpp

```c++
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
```








P20: arrfunc . cpp Passing arrays to functions

```
#include <iostream>
using namespace std;

int* fun(int *arr1, int *arr2, int size) {
    int i, x, y, s1{}, s2{};
    for (i = 0; i < size; ++i) {
        x = arr1[i];
        y = arr2[i];
        arr1[i] = y;
        arr2[i] = x;
        s1 += y;
        s2 += x;
    }
    return s1 > s2 ? arr1 : arr2;
}

void printArr(int *arr, int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr1[]{1,2,3}, arr2[]{4,5,6}, *arr3;

    cout << "arr1 before: "; printArr(arr1,3);
    cout << "arr2 before: "; printArr(arr2,3);
    arr3 = fun(arr1,arr2,3);
    cout << "arr1  after: "; printArr(arr1,3);
    cout << "arr2  after: "; printArr(arr2,3);
    cout << "arr3       : "; printArr(arr3,3);
}
```



P22: littlebig.cpp Conversions of pointers

```
#include <iostream>
using namespace std;

int main() {
    // higher byte: 'a'; lower byte: 'b'
    short sh = 'b'+256*'a';

    void *v = static_cast<void*>(&sh);
    char *c = static_cast<char*>(v);
    cout << "Order in memory: first "
         << c[0] << " then " << c[1] << endl;
}
```


P23: chararr.cpp C-strings: character arrays

```
#include <iostream>
using namespace std;

void print (const char* t) {
    cout << "String: " << t << endl;
}

int main() {
    char  t1[] = "Betty";
    char  t2[] = {'K', 'i', 't', 't', 'y', '\0'};
    const char *t3 = "Alice";
    cout << "sizeof t1   : "   << sizeof(t1)    << endl;
    cout << "sizeof t2   : "   << sizeof(t2)    << endl;
    cout << "sizeof t3   : "   << sizeof(t3)    << endl;
    cout << "sizeof \'Eve\': " << sizeof("Eve") << endl;
    t1[0] = 'X';
    t2[0] = 'X';
    //tab3[0] = 'X'; // WRONG

    print(t1);
    print(t2);
    print(t3);
}
```


P75: varepoe.cpp Various types of arguments and return values

```
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
```
