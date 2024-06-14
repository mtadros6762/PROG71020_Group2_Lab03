#include "rectangle.h"

//madisont, adilf, armaanm - prog71020 - lab03 - rectangle class implementation

using namespace std;

/*Constructors*/

RECTANGLE::RECTANGLE() : length(0), width(0), area(0) {}
RECTANGLE::RECTANGLE(int l, int w) : length(l), width(w) { calculateRectArea(); }

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

/*Friend Overloaded Operators*/

//Function to overload the cout << operator
ostream& operator<<(ostream& COUT, const RECTANGLE& rect) {
    COUT <<endl<< "Rectangle: The length = " << rect.length
        << ", the width = " << rect.width
        << ", and the area = " << rect.area << endl << endl;
    return COUT;
}

//Function to overload the multiplication * operator
 RECTANGLE operator*(const RECTANGLE& rect, int factor) {
    RECTANGLE newRect(rect.length * factor, rect.width * factor);
    return newRect;
}

 //Function to overload the addition + operator
 RECTANGLE operator+(const RECTANGLE& r1, const RECTANGLE& r2) {
     RECTANGLE newRect(r1.length + r2.length, r1.width + r2.width);
     return newRect;
 }

