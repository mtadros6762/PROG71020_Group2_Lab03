#include "square.h"

//madisont, adilf, armaanm - prog71020 - lab03 - square class implementation

#include "square.h"

using namespace std;

SQUARE::SQUARE() : sides(0), area(0) {}

void SQUARE::setSquareSides() {
    cout << "Please enter an integer for the sides of the Square: ";
    while (!(cin >> sides) || sides <= 0) {
        cout << "Invalid input. Enter a valid integer for the sides of the Square: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    calculateSquareArea();
}

void SQUARE::calculateSquareArea() {
    area = sides * sides;
}

ostream& operator<<(ostream& COUT, const SQUARE& square) {
    COUT << "Square: The side = " << square.sides
        << ", and the area = " << square.area << endl << endl;
    return COUT;
}

SQUARE operator*(const SQUARE& square, int factor) {
    SQUARE newSquare(square.sides * factor);
    return newSquare;
}

SQUARE operator+(const SQUARE& s1, const SQUARE& s2) {
    SQUARE newSquare(s1.sides + s2.sides);
    return newSquare;
}
