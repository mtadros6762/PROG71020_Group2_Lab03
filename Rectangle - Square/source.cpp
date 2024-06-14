#include "rectangle.h"
#include "square.h"

//madisont, adilf, armaanm - prog71020 - lab03 - source code

using namespace std;

int main(void) {
	
	/*Rectangle Test*/
	RECTANGLE r1, r2, r3;

	//Create Rectangle objects
	cout << "| Rectangle 1 |\n";
	r1.setRectLength();
	r1.setRectWidth();
	r1.calculateRectArea();
	cout << r1;

	cout << "| Rectangle 2 |\n";
	r2.setRectLength();
	r2.setRectWidth();
	r2.calculateRectArea();
	cout << r2;

	cout << "| Rectangle3 = (Rectangle1 * 2) + Rectangle2 |\n";
	r1 = r1 * 2;
	r3 = r1 + r2;
	cout << r3;

	/*Square Test*/
	SQUARE s1, s2, s3;

	//Create Square objects
	cout << "| Square 1 |\n";
	s1.setSquareSides();
	s1.calculateSquareArea();
	cout << s1;

	cout << "| Square 2 |\n";
	s2.setSquareSides();
	s2.calculateSquareArea();
	cout << s2;

	cout << "| Square3 = (Square1 * 2) + Square2 |\n";
	s1 = s1 * 2;
	s3 = s1 + s2;
	cout << s3;

	return 0;
}