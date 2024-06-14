#pragma once

//madisont, adilf, armaanm - prog71020 - lab03 - rectangle class interface

//REQUIREMENTS
/*Design, implement and test a Rectangle class which:
	a. Has a function to calculate its area. (1 pt.)
	b. It can be printed using cout <<
The format of the printing is as follows:
Rectangle: The length = 6, the width = 2 and the area = 12*/

#ifndef RECTANGLE_CLASS_H
#define RECTANGLE_CLASS_H

//LIBRARIES & MACROS
#include <iostream>

//CLASS
class RECTANGLE {
	//DATA
	int length;
	int width;
	int area;
public:
	//CONSTRUCTOR PROTOTYPES
	RECTANGLE();
	RECTANGLE(int l, int w);

	//MEMBER FUNCTION PROTOTYPES
	
	/*Setters*/
	void setRectLength();
	void setRectWidth();
	void calculateRectArea();

	/*Operator overloaded friend functions*/
	friend std::ostream& operator<<(std::ostream& COUT, const RECTANGLE& rect);
	friend RECTANGLE operator*(const RECTANGLE& rect, int factor);
	friend RECTANGLE operator+(const RECTANGLE& r1, const RECTANGLE& r2);
};

#endif //RECTANGLE_CLASS_H