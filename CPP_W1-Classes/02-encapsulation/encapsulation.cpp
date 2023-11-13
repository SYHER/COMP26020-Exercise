#include <iostream>

class Rectangle {
private:
    float length, width;

public:
    Rectangle(float length, float width) : length(length), width(width) {}

    float get_length() const {
        return length;
    }
    float get_width() const {
        return width;
    }
    float perimeter() {
        return 2.0 * (length + width);
    }
};

class Circle {
private:
    float radius;

public:
    Circle(float radius): radius(radius){}

    float get_radius() const {
        return radius;
    }
    float circumference() {
        return 2.0 * 3.14 * radius;
    }
};


int main(int argc, char **argv) {
    Rectangle r(10, 20);
    Circle c(1);

	std::cout << "Rectangle l: " << r.get_length() << ", w: " << r.get_width();
	std::cout << ", perimeter: " << r.perimeter() << "\n";

	std::cout << "Circle r: " << c.get_radius();
	std::cout << ", circumference: " << c.circumference() << "\n";
    return 0;
}
