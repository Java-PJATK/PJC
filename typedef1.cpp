#include <iostream>
using namespace std;

typedef int IN3[][2][2];

int fun(IN3 t) {
    int max = t[0][0][0];
    for (int k = 0; k < 2; ++k)
        for (int j = 0; j < 2; ++j)
            for (int i = 0; i < 2; ++i)
                if (t[k][j][i] > max)
                    max = t[k][j][i];
    return max;
}

int main() {
    IN3 in3 = { {{4,3},{2,1}},
                {{7,8},{5,6}} };

    int max = fun(in3);

    cout << "max = " << max << endl;
}
