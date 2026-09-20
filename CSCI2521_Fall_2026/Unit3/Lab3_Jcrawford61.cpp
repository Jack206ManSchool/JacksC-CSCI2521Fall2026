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

	float length = 0.0;
	float width = 0.0;
	float radius = 0.0;
	float result = 0.0;

	cout << "Menu" << endl;
	cout << "1. Calculate the Area of a Rectangle" << endl;
	cout << "2. Calculate the Area of a Circle" << endl;
	cout << "3. Quit" << endl;

	cout << "Please make a menu selection : ";
	cin >> userInput;

	switch (userInput) {
		case 1:

				cout << "Please enter the length of the rectangle : ";
				cin >> length;

				cout << "Please enter the width of the rectangle : ";
				cin >> width;

				result = length * width;

				cout << "The area of the rectangle is : " << result << endl;

			break;
		case 2:

			cout << "Please enter the radius of the circle : ";
			cin >> radius;

			result = PI_VAL * (radius * radius);

			cout << "The area of the circle is : " << result << endl; 

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