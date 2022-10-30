//------------------------------------------------------------------------------
// Pr 16-3.cpp
// 
// This program demonstrates Rectangle class exceptions.
// 
// Author: Gaddis 9E Ch.16 pp.998-999
//------------------------------------------------------------------------------
#include <iostream>

#include "Rectangle.h"

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cin;
using std::cout;
using std::endl;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

	int width;
	int length;

	// Create a Rectangle object.
	Rectangle myRectangle;

	// Get the width and length.
	cout << "\nEnter the rectangle's width: ";
	cin >> width;
	cout << "\nEnter the rectangle's length: ";
	cin >> length;

	// Store these values in the Rectangle object.
	try {
		myRectangle.setWidth(width);
		myRectangle.setLength(length);

		cout << "\nThe area of the rectangle is "
			<< myRectangle.getArea() << endl;
	}
	catch (Rectangle::NegativeWidth) {
		cout << "Error: A negative value was given "
			<< "for the rectangle's width.\n";
	}
	catch (Rectangle::NegativeLength) {
		cout << "Error: A negative value was given "
			<< "for the rectangle's length.\n";
	}

	cout << "End of the program.\n";

	return 0;
}