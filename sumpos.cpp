#include <iostream>
using namespace std;

int sumPos(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if ( arr[i] <= 0 ) continue;
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = { 1, -3, 5, -7, 2, 0, 9 };
    int sum = sumPos(arr,sizeof(arr)/sizeof(arr[0]));
    cout << "Sum: " << sum << endl;
}
