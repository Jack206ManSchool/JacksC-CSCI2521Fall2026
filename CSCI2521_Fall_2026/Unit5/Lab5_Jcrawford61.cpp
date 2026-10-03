/**
 * @file Lab5_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-10-02
 * @brief A modular program to generate a multiplication table using functions.
 */
#include<iostream>

using namespace std;

void printInputValidationError();
bool isMaxDigitInputValid(int input);
int getMaxDigitInput();
void printMultiplicationTable(int maxDigit);
int main();

/**
	@brief : Entry point of the program.
	@param : None.
	@return: 0 to indicate success.
 */
int main() {

	int digitInput = getMaxDigitInput();
	printMultiplicationTable(digitInput);

	return 0;
}

/**
@brief : Explain that this function outputs an error message for invalid input.
@param : None.
@return: None(void).
*/
void printInputValidationError() {
	cout << "Error : The max digit must be greater than 4 and less than 10. Please try again." << endl;
}

/**
@brief : Explain that this function validates the user's input against the acceptable range.
@param : input - The user - provided integer to validate.
@return: true if the input is greater than 4 and less than 10; false otherwise.
*/
bool isMaxDigitInputValid(int input) {
	return (input > 4 && input < 10);
}

/**
@brief : Explain that this function prompts the user for input and ensures it is valid.
@param : None.
@return: A validated int representing the maximum digit.
*/
int getMaxDigitInput() {

	int inputDigit = 0;

	cout << "Please enter the maximum digit for the multiplication table." << endl;
	cout << "The digit must be greater than 4 and less than 10" << endl;

	do {
		cout << "Max Digit : ";
		cin >> inputDigit;
		if (isMaxDigitInputValid(inputDigit)){
			break;
		}
		inputDigit = 0;

		printInputValidationError();
	} while (true);


	return inputDigit;
}

/**
	@brief : Explain that this function prints the formatted multiplication table.
	@param : maxDigit - The highest digit to include in the table.
	@return: None(void).
*/
void printMultiplicationTable(int maxDigit) {
	for (int i1 = 1; i1 <= maxDigit; i1++) {
		for (int i2 = 1; i2 <= maxDigit; i2++) {
			cout << (i1 * i2) << "\t";
		}
		cout << endl;
	}
}
