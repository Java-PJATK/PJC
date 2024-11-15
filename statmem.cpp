#include <iostream>
#include <cmath>    // sqrt
using namespace std;

struct Point {
    double x, y;
    static Point center;
};
Point Point::center;

void set_center(double,double);
double dist_from_cen(const Point&);

int main() {
    Point P = {3, 4};
    cout << "Point P = (" << P.x << "," << P.y << ")\n";

    set_center(0,0);
    cout << "Dist P-center: " << dist_from_cen(P) << endl;

    set_center(9,-4);
    cout << "Dist P-center: " << dist_from_cen(P) << endl;
}

void set_center(double xx,double yy) {
    Point::center.x = xx;
    Point::center.y = yy;
    cout << "Center in (" << xx << "," << yy << ")\n";
}

double dist_from_cen(const Point& p) {
    return
        sqrt((p.x-Point::center.x)*(p.x-Point::center.x) +
             (p.y-Point::center.y)*(p.y-Point::center.y));
}
