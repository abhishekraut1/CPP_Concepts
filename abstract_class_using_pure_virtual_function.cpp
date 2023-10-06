#include<bits/stdc++.h>
using namespace std;
// abstract class using pure virtual function

// Abstract class Shape
class Shape {
public:
    // Pure virtual function, making Shape an abstract class
    virtual double area() const = 0;

    // Non-pure virtual function
    void printName() const {
        cout << "This is a shape." << endl;
    }
};

// Concrete class Circle, derived from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementing the pure virtual function area
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

// Concrete class Rectangle, derived from Shape
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementing the pure virtual function area
    double area() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Using the abstract base class pointer
    Shape* shapePtr;

    shapePtr = &circle;
    shapePtr->printName();
    cout << "Area of the circle: " << shapePtr->area() << endl;

    shapePtr = &rectangle;
    shapePtr->printName();
    cout << "Area of the rectangle: " << shapePtr->area() << endl;

    return 0;
}
