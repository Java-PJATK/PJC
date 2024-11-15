#include <iostream>
using namespace std;

class Vector {
    double x, y, z;
public:
    void set(double xx = 0, double yy = 0, double zz =0) {
        x = xx;
        y = yy;
        z = zz;
    }
    static double dot_product(const Vector& w1,
                              const Vector& w2) {
        return w1.x * w2.x + w1.y * w2.y + w1.z * w2.z;
    }
};

int main() {
    Vector w1, w2, ww;
    w1.set(1, 1, 2);
    w2.set(1,-1, 2);

    cout << "w1*w2 = "
         << Vector::dot_product(w1, w2) << endl;

    cout << "w1*w2 = "
         << ww.dot_product(w1, w2)      << endl;
}
