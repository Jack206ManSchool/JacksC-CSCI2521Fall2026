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

		int result1 = getOdd(firstNum, manuNum, prodNum);
		int result2 = getEven(manuNum, prodNum);

		// adding the odd - position digits(0 + 1 + 0 + 2 + 1 + 3 = 7),
		int result5 = result1;
		// multiplying by three(7 × 3 = 21),
		result5 *= 3;
		// adding this result to the sum of the even - position digits(21 + (5 + 5 + 0 + 4 + 6) = 41),
		result5 += result2;
		// calculating modulo ten(41 mod 10 = 1),
		result5 %= 10;
		// subtracting from ten(10 − 1 = 9).
		int result6 = 10 - result5;

		/*
		The check digit is thus 9. Confirm the check digit with the first UPC image above,
		notice the last small digit is 9 ? That last small digit is the checksum as shown
		on the UPC barcode itself.
		*/

		cout << endl << endl;

		if (result6 == lastNum) {
			cout << "UCP code " << firstNum << manuNum << prodNum << lastNum << " is valid." << endl;
		}
		else {
			cout << "Invalid UCP code." << endl;
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

int getOdd(int fN, int mN, int pN) {
	return (fN + ((mN / 1000) % 10) + ((mN / 10) % 10) + ((pN / 10000) % 10) + ((pN / 100) % 10) + (pN % 10));
}

int getEven(int mN, int pN) {
	return (((mN / 10000) % 10) + ((mN / 100) % 10) + (mN % 10) + ((pN / 1000) % 10) + ((pN / 10) % 10));
}
