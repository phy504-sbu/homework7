#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

private:
    double _length;
    double _height;

public:

    // default constructor

    Rectangle():
        _length{1.0}, _height{1.0} {}

    // parametric constructor

    Rectangle(double length, double height):
        _length{length}, _height{height} {}

    // member functions

    double area() {return _length * _height;}

    double perimeter() {return 2 * _length +  2 * _height;}

    bool is_square() {return _length == _height;}

};

#endif
