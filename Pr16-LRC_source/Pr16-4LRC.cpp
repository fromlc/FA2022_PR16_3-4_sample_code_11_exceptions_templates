//------------------------------------------------------------------------------
// Pr16-4.cpp
// 
// This program handles cin exceptions instead of 
// Rectangle class exceptions. 
// 
// Here Rectangle doesn't need custom exceptions, since
// we handle cin exceptions at a lower level.
// 
// The app code is smaller because the exception code
// has been abstracted into input_util.cpp.
// 
// Author: Prof. Linda C, based on Gaddis 9E Ch. 16 pp. 1000-1001
//------------------------------------------------------------------------------
#include <iostream>

#include "input_util.h"		// input util function prototypes
#include "Rectangle.h"

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cout;
using std::endl;

//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
const string g_widthPrompt = "\nEnter rectangle's width (Q quits): ";
const string g_lengthPrompt = "\nEnter rectangle's length (Q quits): ";
const string g_errorPrompt = "That's not a positive integer.";

//------------------------------------------------------------------------------
// local function protoypes
//------------------------------------------------------------------------------
Rectangle* appSetup();
void appLoop(Rectangle* pR);

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

	Rectangle* pR = appSetup();

	appLoop(pR);

	// release Rectangle memory
	delete pR;

	return 0;
}

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
Rectangle* appSetup() {

	// app banner
	cout << "\nRectangle Area Calculator\n";

	// customize prompt displayed on input error
	setErrorPrompt(g_errorPrompt);

	// Create a Rectangle object on the heap
	return new Rectangle;
}

//------------------------------------------------------------------------------
// app main loop
//------------------------------------------------------------------------------
void appLoop(Rectangle* pR) {

	//--------------------------------------------------------------------------
	// this looks like an infinite loop, but...
	// getConsoleInt() terminates app on 'q' or 'Q' entered
	//--------------------------------------------------------------------------
	while (true) {

		// Get rectangle width and store it in *pR
		pR->setWidth(getConsoleInt(g_widthPrompt));

		// Get rectangle length and store it in *pR 
		pR->setLength(getConsoleInt(g_lengthPrompt));

		// Display the rectangle's area
		cout << "\nThe rectangle's area is "
			<< pR->getArea() << endl;
	}
}

