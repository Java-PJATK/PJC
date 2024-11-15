#include <iostream>
using namespace std;

int sumuntil(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if ( arr[i] <= 0 ) break;
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = { 1, 3, 5, 7, 0, 4, 9 };
    int sum = sumuntil(arr, sizeof(arr)/sizeof(arr[0]));
    cout << "Sum: " << sum << endl;
}
