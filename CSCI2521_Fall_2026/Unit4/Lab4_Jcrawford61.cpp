/**
 * @file Lab4_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-09-25
 * @brief A program to generate a multiplication table with input validation.
 */
#include<iostream>

using namespace std;

int main() {

	int inputDigitX = 0;
	int inputDigitY = 0;

	do {
		cin >> inputDigitX;
		if (inputDigitX > 4 && inputDigitX < 10) {
			break;
		}
		cout << "Error : The max digit must be greater than 4 and less than 10. Please try again." << endl;
	} while (true);

	//Please enter the maximum digit for the multiplication table.
	//	The digit must be greater than 4 and less than 10
	//	Max Digit : 4
	//	
	//	Max Digit : 10
	//	Error : The max digit must be greater than 4 and less than 10. Please try again.
	//	Max Digit : 9

	return 0;
}