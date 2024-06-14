#include "rectangle.h"

//madisont, adilf, armaanm - prog71020 - lab03 - rectangle class implementation

using namespace std;

/*Setters*/

//Function to set the length of a rectangle from user input
void RECTANGLE::setRectLength() {
    cout << "Please enter an integer for the length of the Rectangle: ";
    //Loop until the user inputs a valid integer that is greater than 0
    while (!(cin >> length) || length <= 0) {
        cout << "Invalid input. Enter a valid integer for the length of the Rectangle: ";
        cin.clear(); //Clear fail flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Discard invalid input
    }
}

//Function to set the width of a rectangle from user input
void RECTANGLE::setRectWidth() {
    cout << "Please enter an integer for the width of the Rectangle:   ";
    //Loop until the user inputs a valid integer that is greater than 0 and is not equal to length
    while (!(cin >> width) || width <= 0 || width == length) {
        cout << "Invalid input. Enter a valid integer for the width of the Rectangle: ";
        cin.clear(); //Clear fail flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Discard invalid input
    }
}

//Function to calculate the area of a rectangle
void RECTANGLE::calculateRectArea() {
	area = length * width;
}



ostream& operator<<(ostream& COUT, const RECTANGLE& rect) {
    COUT <<endl<< "Rectangle: The length = " << rect.length
        << ", the width = " << rect.width
        << ", and the area = " << rect.area << endl << endl;
    return COUT;
}

 RECTANGLE operator*(const RECTANGLE& rect, int factor) {
    RECTANGLE newRect(rect.length * factor, rect.width * factor);
    return newRect;
}

 RECTANGLE operator+(const RECTANGLE& r1, const RECTANGLE& r2) {
     RECTANGLE newRect(r1.length + r2.length, r1.width + r2.width);
     return newRect;

 }

