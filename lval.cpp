#include <iostream>
using namespace std;

int& timestwo(int& m) {
    static int count;
    cout << " In timestwo: count = " << count << endl;
    m *= 2;
    return count;
}

void printTab(const int *tab, int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << tab[i] << " ";
    cout << "]" << endl;
}

int main() {
    int i = 1, j = 2, k = 3;

    // assignment as an l-value
    (i=j) = k;
    cout << " A: i = " << i << " j = " << j
         <<    " k = " << k << endl;           // 3,2,3

    int tab[] = {1,2,3,4}, *p = tab;
    cout << " B: before "; printTab(tab,4);
    *++++++p = 8;
    cout << " B:  after "; printTab(tab,4);

    // now p points to the last element!
    cout << " C: ++*----p = " << ++*----p << endl; // 3
    cout << " C:    tab "; printTab(tab,4);

    // conversion as an l-value
    int m = 7;
    timestwo( (int&)m=8 )++;  // conversion unnecessary!
    cout << "D1: m = " << m << endl;
    timestwo(m)++;
    cout << "D2: m = " << m << endl;
    int n = timestwo(m) = 10;
    cout << "D3: m = " << m << endl;
    cout << "D4: n = " << n << endl;

    // comma operator
    k = (i=1, j=2) + 1;
    cout << " E: i = " << i << " j = " << j
         <<    " k = " << k << endl;          // 1,2,3

    // conditional expression as an l-value
    (k > 2 ? i : j) = 5;
    cout << " F: i = " << i << " j = " << j
         <<    " k = " << k << endl;          // 5,2,3
}
