/**
 * @file Exercise1_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-09-29
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */
#include<iostream>

using namespace std;

void getInputs(int& fN, int& lN, int& mN, int& pN);
int getOdd(int fN, int mN, int pN);
int getEven(int mN, int pN);
int getDigit(int num, int div);

int main() {
	
	char yOrN = ' ';
	int firstNum = 0;
	int lastNum = 0;
	int manuNum = 0;
	int prodNum = 0;

	cout << "do you have a number to test? (y or n): ";
	cin >> yOrN;

	while (yOrN == 'y' || yOrN == 'Y') {

		getInputs(firstNum, lastNum, manuNum, prodNum);

		// adding the odd - position digits(0 + 1 + 0 + 2 + 1 + 3 = 7),
		int result = getOdd(firstNum, manuNum, prodNum);
		// multiplying by three(7 × 3 = 21),
		result *= 3;
		// adding this result to the sum of the even - position digits(21 + (5 + 5 + 0 + 4 + 6) = 41),
		result += getEven(manuNum, prodNum);
		// calculating modulo ten(41 mod 10 = 1),
		result %= 10;
		// subtracting from ten(10 − 1 = 9).
		int finalResult = 10 - result;

		if (finalResult == lastNum) {
			// TODO: Fix Shortened Number Rendering
			cout << endl << endl << "UCP code " << firstNum << manuNum << prodNum << lastNum << " is valid." << endl;
		}
		else {
			cout << endl << endl << "Invalid UCP code." << endl;
		}

		cout << "do you have a number to test? (y or n): ";
		cin >> yOrN;

	}
	
	cout << endl;

	return 0;
}

void getInputs(int& fN, int& lN, int& mN, int& pN) {
	cout << "Enter the very first number of the UPC: ";
	cin >> fN;
	cout << "Enter the very last number of the UPC: ";
	cin >> lN;
	cout << "Enter your Manufacturer number (the first set of 5 digits): ";
	cin >> mN;
	cout << "Enter your Product number (the second set of 5 digits): ";
	cin >> pN;
}

int getDigit(int num, int div) {
	return ((num / div) % 10);
}

int getOdd(int fN, int mN, int pN) {
	return 
		fN + 
		getDigit(mN, 1000) + 
		getDigit(mN, 10) + 
		getDigit(pN, 10000) + 
		getDigit(pN, 100) + 
		getDigit(pN, 1);
}

int getEven(int mN, int pN) {
	return 
		getDigit(mN, 10000) + 
		getDigit(mN, 100) + 
		getDigit(mN, 1) + 
		getDigit(pN, 1000) + 
		getDigit(pN, 10);
}
