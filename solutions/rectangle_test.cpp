#include <iostream>

#include "rectangle.H"

int main() {

    Rectangle rect(1.0, 2.0);

    std::cout << "area = " << rect.area() << std::endl;
    std::cout << "perimeter = " << rect.perimeter() << std::endl;
    std::cout << "is square? = " << rect.is_square() << std::endl;

}
