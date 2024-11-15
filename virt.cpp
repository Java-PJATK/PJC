#include <iostream>
#include <cmath>     // atan
using std::ostream; using std::cout; using std::endl;

class Figure {
protected:
    static const double PI;
public:
    virtual double getArea() const      = 0;
    virtual double getPerimeter() const = 0;
    virtual void   info(ostream&) const = 0;
    static  double totalArea(Figure* arr[], int size) {
        double sum = 0;
        for (int i = 0; i < size; ++i)
            sum += arr[i]->getArea();
        return sum;
    }
    static  Figure* maxPerim(Figure* arr[], int size) {
        int ind = 0;
        for (int i = 0; i < size; ++i)
            if (arr[i]->getPerimeter() >
                    arr[ind]->getPerimeter())
                ind = i;
        return arr[ind];
    }
};
const double Figure::PI = 4*atan(1.);
void Figure::info(ostream& str) const {
    str << "Figure: ";
}

class Circle : public Figure {
    double radius;
public:
    Circle(double r) : radius(r){ }
    double getArea() const      { return PI*radius*radius; }
    double getPerimeter() const { return 2*PI*radius; }
    void   info(ostream& str) const {
        Figure::info(str);
        str << "circle with radius " << radius;
    }
};

class Square : public Figure {
    double side;
public:
    Square(double s) : side(s){ }
    double getArea() const      { return side*side; }
    double getPerimeter() const { return 4*side; }
    void   info(ostream& str) const {
        Figure::info(str);
        str << "square with side   " << side;
    }
};

int main() {
    Figure* arr[] = { new Circle(1.), new Square(1.),
                      new Circle(2.), new Square(3.)
                    };
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        arr[i]->info(cout);
        cout << endl;
    }
    Figure* maxper = Figure::maxPerim(arr,size);
    cout << "Total area: " << Figure::totalArea(arr,size)
         << "\nFigure with maximum perimeter: ";
    maxper->info(cout);
    cout << "\n has perimeter "
         << maxper->getPerimeter() << endl;
    for (size_t i=0; i < std::size(tab); ++i) delete tab[i];
}
