/**
 * @file Exercise1_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-09-29
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */
#include<iostream>
#include<string>

using namespace std;

void getInputs(int& fN, int& lN, int& mN, int& pN);
string getFullCode(int fN, int lN, int mN, int pN);
int getOdd(int fN, int mN, int pN);
int getEven(int mN, int pN);
int getDigit(int num, int div);
void printIsValid(int fR, int lN, string code);

int main() {
	
	char yOrN = 'y';
	int firstNum = 0;
	int lastNum = 0;
	int manuNum = 0;
	int prodNum = 0;

	while (yOrN != 'n' && yOrN != 'N') {

		if (yOrN == 'y' || yOrN == 'Y') {
			cout << "Do you have a number to test? (y or n): ";
		}
		else {
			cout << "That is not an answer! Please type y or n: ";
		}

		cin >> yOrN;

		if (yOrN == 'y' || yOrN == 'Y') {
			getInputs(firstNum, lastNum, manuNum, prodNum);

			// adding the odd - position digits
			int result = getOdd(firstNum, manuNum, prodNum);
			// multiplying by three
			result *= 3;
			// adding this result to the sum of the even - position digits
			result += getEven(manuNum, prodNum);
			// calculating modulo ten
			result %= 10;
			// subtract from ten
			int finalResult = 10 - result;

			printIsValid(finalResult, lastNum, getFullCode(firstNum, lastNum, manuNum, prodNum));
		}

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

string getFullCode(int fN, int lN, int mN, int pN) {
	string code = to_string(fN);

	string mNString = to_string(mN);
	while (mNString.size() < 5) {
		mNString.insert(0, 1, '0');
	}

	code.append(mNString);

	string pNString = to_string(pN);
	while (pNString.size() < 5) {
		pNString.insert(0, 1, '0');
	}

	code.append(pNString);
	code.append(to_string(lN));

	return code;
}

void printIsValid(int fR, int lN, string code) {
	if (fR == lN) {
		cout << endl << endl << "UCP code " << code << " is valid." << endl;
	}
	else {
		cout << endl << endl << "Invalid UCP code." << endl;
	}
}