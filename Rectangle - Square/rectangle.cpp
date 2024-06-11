#include "rectangle.h"

//madisont, adilf, armaanm - prog71020 - lab03 - rectangle class implementation

using namespace std;

/*Constructors*/

RECTANGLE::RECTANGLE() : length(0), width(0), area(0) {}

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
    cout << "Please enter an integer for the width of the Rectangle: ";
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

//Function to implement r = r1 * 2 + r2
int RECTANGLE::calculateRectsSum(RECTANGLE r1, RECTANGLE r2) {
    //Scale r1 by 2
    r1.length = r1.length * 2;
    r1.width = r1.width * 2;

    //Add the two rectangles together
    length = r1.length + r2.length;
    width = r1.width + r2.width;
    
    calculateRectArea();

    return length, width, area;
}

/*Getters*/

//Functions to access private class data (length, width, and area)
int RECTANGLE::getRectLength() {
	return length;
}
int RECTANGLE::getRectWidth() {
	return width;
}
int RECTANGLE::getRectArea() {
	return area;
}

//Function to prunt the rectangle information
void RECTANGLE::printRect() {
    cout << "Rectangle: The length = " << length << ", the width = " << width << ", and the area = " << area << "\n" << endl;
}