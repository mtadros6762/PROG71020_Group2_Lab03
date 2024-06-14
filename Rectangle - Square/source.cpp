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
	cout << "| Rectangle 1 |\n";
	r2.setRectLength();
	r2.setRectWidth();
	r2.calculateRectArea();
	r3 = r1 * 2 + r2;
	cout << r3;


	/*Square Test*/
	SQUARE s1, s2, s3;

	//Create Square objects
	cout << "| Square 1 |\n";
	s1.setSquareSides();
	s1.calculateSquareArea();
	cout << s1;
	s2 = s1 * 2;
	cout << s2;
	s3 = s1 + s2;
	cout << s3;


	return 0;
}