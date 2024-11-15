#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char strin[] = "int* fun(char& c,double** wtab);";
    char separ[] = ")(,;";
    char* token;

    token = strtok(strin,separ);
    while (token != 0) {
        cout << token << endl;
        token = strtok(0,separ);
    }
}
