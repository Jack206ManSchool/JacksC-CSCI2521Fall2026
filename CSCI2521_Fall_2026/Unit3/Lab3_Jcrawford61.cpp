/**
 * @file Lab3_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-09-19
 * @brief A menu-driven program to calculate areas of rectangles and circles.
*/

#include<iostream>

using namespace std;

int main() {

	const float PI_VAL = 3.14159;

	int userInput;

	cout << "Menu" << endl;
	cout << "1. Calculate the Area of a Rectangle" << endl;
	cout << "2. Calculate the Area of a Circle" << endl;
	cout << "3. Quit" << endl;

	cin >> userInput;

	switch (userInput) {
	
		case 1:

			break;
		case 2:

			break;

		default:
			cout << "Sorry, but that's not a valid option..." << endl;
		// Note: Fallthrough here is intentional
		case 3:
			exit(0);
			break;
	}


	return 0;
}