#pragma once

//madisont, adilf, armaanm - prog71020 - lab03 - square class interface

//REQUIREMENTS
/*Design, implement and test a Square class which:
    a. Has a function to calculate its area
    b. It can be printed using cout <<
The format of the printing is as follows:
Square: The side = 6 and the area = 36*/

#include <iostream>
using namespace std;

class SQUARE {
    int sides;
    int area;
public:
    SQUARE();
    SQUARE(int l) : sides(l) { calculateSquareArea(); }

    void setSquareSides();
    void calculateSquareArea();

    int getSquareSides() const { return sides; }
    int getSquareArea() const { return area; }

    void printSquare() const { cout << *this; }

    friend ostream& operator<<(ostream& COUT, const SQUARE& square);
    friend SQUARE operator*(const SQUARE& square, int factor);
    friend SQUARE operator+(const SQUARE& s1, const SQUARE& s2);
};
