#pragma once

//madisont, adilf, armaanm - prog71020 - lab03 - square class interface

//REQUIREMENTS
/*Design, implement and test a Square class which:
    a. Has a function to calculate its area
    b. It can be printed using cout <<
The format of the printing is as follows:
Square: The side = 6 and the area = 36*/

#ifndef SQUARE_CLASS_H
#define SQUARE_CLASS_H

//LIBRARIES AND MACROS
#include <iostream>

//CLASS
class SQUARE {
    //DATA
    int sides;
    int area;
public:
    //CONSTRUCTOR PROTOTYPES
    SQUARE();
    SQUARE(int l);

    //MEMBER FUNCTION PROTOTYPES

    /*Setters*/
    void setSquareSides();
    void calculateSquareArea();

    /*Getters*/
    int getSquareSides();
    int getSquareArea();

    /*Operator overloaded friend functions*/
    friend std::ostream& operator<<(std::ostream& COUT, const SQUARE& square);
    friend SQUARE operator*(const SQUARE& square, int factor);
    friend SQUARE operator+(const SQUARE& s1, const SQUARE& s2);
};

#endif //SQUARE_CLASS_H