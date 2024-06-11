#include "square.h"

//madisont, adilf, armaanm - prog71020 - lab03 - square class implementation

using namespace std;

/*Constructors*/

SQUARE::SQUARE() : sides(0), area(0) {}

/*Setters*/

//Function to set the square sidelengths from user input
void SQUARE::setSquareSides() {
    cout << "Please enter an integer for the sides of the Square: ";
    //Loop if the user input for sides is not a valid integer
    while (!(cin >> sides) || sides <= 0) {
        cout << "Invalid input. Enter a valid integer for the sides of the Square: ";
        cin.clear(); //Clear fail flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Discard invalid input
    }
}

//Function to calculate the area of a square
void SQUARE::calculateSquareArea() {
	area = sides * sides;
}

//Function to implement s = s1 * 2 + s2
int SQUARE::calculateSquaresSum(SQUARE s1, SQUARE s2) {
    //Scale s1 by 2
    s1.sides = s1.sides * 2;

    //Add the two rectangles together
    sides = s1.sides + s2.sides;

    calculateSquareArea();

    return sides, area;
}

/*Getters*/

//Functions to access private class data (sides and area)
int SQUARE::getSquareSides() {
	return sides;
}
int SQUARE::getSquareArea() {
	return area;
}

//Function to print the square information
void SQUARE::printSquare() {
    cout << "Square: The side = " << sides << " and the area = " << area << "\n" << endl;
}