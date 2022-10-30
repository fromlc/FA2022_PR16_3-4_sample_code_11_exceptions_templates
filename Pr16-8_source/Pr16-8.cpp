//------------------------------------------------------------------------------
// Pr16-8.cpp
// 
// This program demonstrates the swapVars function template.
// 
// Author: Gaddis 9E Ch.16 pp.1010-1011
//------------------------------------------------------------------------------
#include <iostream>

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cin;
using std::cout;
using std::endl;

//------------------------------------------------------------------------------
// template functions
//------------------------------------------------------------------------------
template <typename T>
void swapVars(T& var1, T& var2) {

	T temp;

	// swap values of reference parameters
	temp = var1;
	var1 = var2;
	var2 = temp;
}

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {
	char ch1, ch2;			// Two chars
	int int1, int2;          // Two ints
	double double1, double2; // Two doubles

	// Get and swapVars two chars
	cout << "\nEnter two characters: ";
	cin >> ch1 >> ch2;
	cout << "\nBefore swapVars(): " << ch1 << " " << ch2;
	swapVars(ch1, ch2);
	cout << "\nAfter swapVars(): " << ch1 << " " << ch2;

	// Get and swapVars two ints
	cout << "\n\nEnter two integers: ";
	cin >> int1 >> int2;
	cout << "\nBefore swapVars(): " << int1 << " " << int2;
	swapVars(int1, int2);
	cout << "\nAfter swapVars(): " << int1 << " " << int2;

	// Get and swapVars two doubles
	cout << "\n\nEnter two floating-point numbers: ";
	cin >> double1 >> double2;
	cout << "\nBefore swapVars(): " << double1 << " " << double2;
	swapVars(double1, double2);
	cout << "\nAfter swapVars(): " << double1 << " " << double2 << endl;

	return 0;
}