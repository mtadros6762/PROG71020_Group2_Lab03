//madisont, adilf, armaanm - prog71020 - lab03 - square class implementation

using namespace std;

/*Constructors*/
SQUARE::SQUARE() : sides(0), area(0) {}
SQUARE::SQUARE(int l) : sides(l) { calculateSquareArea(); }

/*Setters*/

//Function to set the sidelengths of a square from user input
void SQUARE::setSquareSides() {
    cout << "Please enter an integer for the sides of the Square: ";
    //Loop until the user inputs a valid integer that is greater than 0
    while (!(cin >> sides) || sides <= 0) {
        cout << "Invalid input. Enter a valid integer for the sides of the Square: ";
        cin.clear(); //Clear fail flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Discard invalid input
    }
    calculateSquareArea();
}

//Function to calculate area of a square
void SQUARE::calculateSquareArea() {
    area = sides * sides;
}

/*Getters*/

//Functions to access private class data (sides and area)
int SQUARE::getSquareSides() {
    return sides;
}
int SQUARE::getSquareArea() {
    return area;
}

/*Friend Overloaded Operators*/

//Function to overload the cout << operator
ostream& operator<<(ostream& COUT, const SQUARE& square) {
    COUT << "Square: The side = " << square.sides
        << ", and the area = " << square.area << endl << endl;
    return COUT;
}

//Function to overload the multiplication * operator
SQUARE operator*(const SQUARE& square, int factor) {
    SQUARE newSquare(square.sides * factor);
    return newSquare;
}

//Function to overload the addition + operator
SQUARE operator+(const SQUARE& s1, const SQUARE& s2) {
    SQUARE newSquare(s1.sides + s2.sides);
    return newSquare;
}
