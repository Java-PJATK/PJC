#include <iostream>
using namespace std;

int main() {
    const int st_size = 5;

    char grades[][st_size] = {{ 'A', 'A', 'B', 'C', 'B' },
                              { 'A', 'C', 'C', 'F', 'D' },
                              { 'A', 'C', 'B', 'B', 'A' }};

    int gr_size = sizeof(grades)/sizeof(grades[0]);

    bool isF = false;

    for (int group = 0; group < gr_size; group++)
        for (int student = 0; student < st_size; student++)
            if ( grades[group][student] == 'F' ) {
                isF = true;
                goto THEEND;
            }
THEEND:
    if (isF) cout << "There was an \'F\'" << endl;
    else     cout << "There was no \'F\'" << endl;
}
