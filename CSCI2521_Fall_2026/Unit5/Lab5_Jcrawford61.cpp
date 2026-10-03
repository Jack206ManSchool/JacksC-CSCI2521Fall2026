/**
 * @file Lab5_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-10-02
 * @brief A modular program to generate a multiplication table using functions.
 */
#include<iostream>

using namespace std;

/**
 * @brief Checks if the input is within the valid range.
 * @param input The integer value to be validated.
 * @return True if the input is valid (4 < input < 10), false otherwise.
 */

int main() {

	int inputDigit = 0;

	cout << "Please enter the maximum digit for the multiplication table." << endl;
	cout << "The digit must be greater than 4 and less than 10" << endl;

	do {
		cout << "Max Digit : ";
		cin >> inputDigit;
		if (inputDigit > 4 && inputDigit < 10) {
			break;
		}
		inputDigit = 0;

		cout << "Error : The max digit must be greater than 4 and less than 10. Please try again." << endl;
	} while (true);

	for (int i1 = 1; i1 <= inputDigit; i1++) {
		for (int i2 = 1; i2 <= inputDigit; i2++) {
			cout << (i1 * i2) << "\t";
		}
		cout << endl;
	}

	return 0;
}