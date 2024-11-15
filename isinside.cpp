#include <iostream>
using namespace std;

class Range;

class Point {

    int numb;
    friend void isInside(const Point*, const Range*);

public:
    Point(int numb = 0)
        : numb(numb)
    { }
};

class Range {

    int left, right;
    friend void isInside(const Point*, const Range*);

public:
    Range(int left = 0, int right = 0)
        : left(left), right(right)
    { }
};

void isInside(const Point *p, const Range *z) {
    if ((p->numb >= z->left) && (p->numb <= z->right))
        cout << "Point " << p->numb  << " is in "
                "range [" << z->left << ","
             << z->right  << "]\n";
    else
        cout << "Point " << p->numb  << " is out of "
                "range [" << z->left << ","
             << z->right  << "]\n";
}

int main() {
    Point p(7);
    Range z1(0,10), z2(8,20);

    isInside(&p,&z1);
    isInside(&p,&z2);
}
