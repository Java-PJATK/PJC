struct Point {
    int x;
    int y;
    Point(int x, int y)
        : x(x), y(y)
    { }
};

struct Pixel: public Point {
    int color;
    Pixel(int x, int y, int color)
        : Point(x,y), color(color)
    { }
};
