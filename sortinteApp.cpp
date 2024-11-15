#include "sortinte.h"  // only header!
#include <iostream>
using namespace std;

int main() {
    int arr[] = {9,7,2,6,4,5,6,2,7,9,2,9,5,2},
        size  = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array: ";
    writarr(arr, size);

    sort(arr, size);

    cout << "  Sorted array: ";
    writarr(arr, size);
}
