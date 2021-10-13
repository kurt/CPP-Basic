// g++ -o c_cons_issue class_constructors_issues.cpp
// this still has bugs

#include <string>

// Point.h
class Point
{
    public:
        Point(double x, double y);
		Point();
        double x() const;
        double y() const;
        std::string as_string() const;

    private:
        double x_coord;
        double y_coord;
};

// Circle.h
class Circle
{
    public:
        Circle(const Point& center, double radius);
        Point center() const;
        double radius() const;
        std::string as_string() const;
        std::string equation() const;

    private:
        Point center_pt;
        double radius_size;
};

// Circle.cpp
int main(){
Circle::Circle(const Point& center, double radius)
{
    center_pt = center;
    radius_size = radius;
}
}