#include "rectangle.h"
#include "square.h"

//madisont, adilf, armaanm - prog71020 - lab03 - source code

using namespace std;

int main(void) {

	/*Rectangle Test*/
	RECTANGLE r1, r2, r3;

	//Create r1 object
	cout << "| Rectangle 1 |\n";
	r1.setRectLength();
	r1.setRectWidth();
	r1.calculateRectArea();
	r1.printRect();

	//Create r2 object
	cout << "| Rectangle 2 |\n";
	r2.setRectLength();
	r2.setRectWidth();
	r2.calculateRectArea();
	r2.printRect();

	//Create r3 object
	cout << "| Rectangle 3 |\n";
	cout << "Calculate: (Rectangle1 x 2) + Rectangle2\n";;
	r3.calculateRectsSum(r1, r2);
	r3.printRect();

	/*Square Test*/
	SQUARE s1, s2, s3;

	//Create s1 object
	cout << "| Square 1 |\n";
	s1.setSquareSides();
	s1.calculateSquareArea();
	s1.printSquare();

	//Create s2 object
	cout << "| Square 2 |\n";
	s2.setSquareSides();
	s2.calculateSquareArea();
	s2.printSquare();

	//Create s3 object
	cout << "| Square 3 |\n";
	cout << "Calculate: (Square1 x 2) + Square2\n";
	s3.calculateSquaresSum(s1, s2);
	cout << "Square 3: ";
	s3.printSquare();

	return 0;
}