#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

bool compar(int a, int b) {
    return (a+b)%2 != 0 ? a%2 != 0 : a < b;
}

struct Evens {
    bool operator()(int a, int b) {
        return (a+b)%2 != 0 ? a%2 == 0 : b < a;
    }
};

template <typename T>
void printVec(const std::vector<T>& vec) {
    copy(vec.cbegin(), vec.cend(),
        std::ostream_iterator<T>(std::cout, " "));
    std::cout << '\n';
}

int main() {
    std::vector<int> vec{2, 5, 2, 9, 1, 5, 7, 4};
    printVec(vec);

    sort(vec.begin(), vec.end(), compar);
    printVec(vec);

    sort(vec.begin(), vec.end(), Evens{});
    printVec(vec);

    sort(vec.begin(), vec.end(),
         [](int a, int b) {return b < a;});
    printVec(vec);

}
