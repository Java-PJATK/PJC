#include <iostream>
#include <string>

int main() {
    using std::string; using std::cout; using std::endl;
    int sz = 3;

    char* arr = new char[sz*(sizeof(string) +
                             sizeof(double)+sizeof(int))];

    string* nam = new (arr) string[sz]{"Sue", "Kim", "Joe"};
    double* wei = new (arr+sz*sizeof(string))
                            double[sz]{55.5, 61.2, 81.5};
    int* hei = new (arr+sz*(sizeof(string)+sizeof(double)))
                            int[sz]{170, 165, 183};
    for (int i = 0; i < sz; ++i)
        cout << nam[i] << " " << wei[i] << " "
             << hei[i] << endl;
    delete [] arr;
}
