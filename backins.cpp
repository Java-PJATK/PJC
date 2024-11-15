#include <algorithm>    // copy
#include <iostream>
#include <iterator>     // inserters
#include <vector>

int main() {
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7};
    std::vector<int> emp;
    std::copy_if(v.begin(), v.end(),
                 std::back_inserter(emp),
                 [](auto n){ return n%2 != 0; });
    std::copy(emp.begin(), emp.end(),
              std::ostream_iterator<int>(std::cout, "\n"));
}
