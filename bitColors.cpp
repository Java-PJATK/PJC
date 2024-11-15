#include <iostream>
#include <cstdint>

std::uint32_t encode(int r, int g, int b, int a) {
    std::uint32_t n = a;
    n = (n << 8) | b;
    n = (n << 8) | g;
    n = (n << 8) | r;
    return n;
}

void decode(std::uint32_t n) {
    std::cout <<   "r = " << (n & 0xFF);
    n >>= 8;
    std::cout << ", g = " << (n & 0xFF);
    n >>= 8;
    std::cout << ", b = " << (n & 0xFF);
    n >>= 8;
    std::cout << ", a = " << (n & 0xFF) << '\n';
}

int main() {
    decode(encode(23, 44, 129, 255));
}
