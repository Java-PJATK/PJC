#include <iostream>
using namespace std;

void bitsChar(char k) {
    int bits = 8*sizeof(k);
    unsigned char mask = 1<<(bits-1);
    for (int i = 0; i < bits; i++) {
        cout << (k & mask ? 1 : 0);
        mask >>= 1;
    }
    cout << endl;
}

void bitsShort(short k) {
    int bits = 8*sizeof(k);
    unsigned short mask = 1<<(bits-1);
    for (int i = 0; i < bits; i++) {
        cout << (k & mask ? 1 : 0);
        mask >>= 1;
    }
    cout << endl;
}

void bitsInt(int k) {
    int bits = 8*sizeof(k);
    unsigned int mask = 1<<(bits-1);
    for (int i = 0; i < bits; i++) {
        cout << (k & mask ? 1 : 0);
        mask >>= 1;
    }
    cout << endl;
}

int main() {
    short s = -1; int i = 259;

    cout << "char 'a' : "; bitsChar('a');
    cout << "short -1 : "; bitsShort(s);
    cout << "int  259 : "; bitsInt(i);
    cout << endl;
    cout << "ios::in  : "; bitsInt(ios::in);
    cout << "ios::out : "; bitsInt(ios::out);
    cout << "ios::app : "; bitsInt(ios::app);
    cout << "ios::in | ios::out\n           ";
    bitsInt(ios::in | ios::out);
}
