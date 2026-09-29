/**
 * @file Exercise1_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-09-29
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */
#include<iostream>

using namespace std;

int main() {
	
	char yOrN = ' ';
	int firstNum = 0;
	int lastNum = 0;
	int manuNum = 0;
	int prodNum = 0;

	cout << "do you have a number to test? (y or n): ";
	cin >> yOrN;

	while (yOrN == 'y' || yOrN == 'Y') {

		cout << "Enter the very first number of the UPC: ";
		cin >> firstNum;

		cout << "Enter the very last number of the UPC: ";
		cin >> lastNum;

		cout << "Enter your Manufacturer number (the first set of 5 digits): ";
		cin >> manuNum;

		cout << "Enter your Pruduct number (the second set of 5 digits): ";
		cin >> prodNum;

		/*
		1. Add the digits in the odd - numbered positions (first, third, fifth, etc.)
		together and multiply by three. Note : the small number on the left of the
		UPC starts the sequence and is the 1st digit to add in this odd sum
		*/

		cout << firstNum << ' ';

		int temp1 = ((manuNum / 1000) % 10);
		cout << temp1 << ' ';

		int temp2 = ((manuNum / 10) % 10);
		cout << temp2 << ' ';

		int temp3 = ((prodNum / 10000) % 10);
		cout << temp3 << ' ';

		int temp4 = ((prodNum / 100) % 10);
		cout << temp4 << ' ';

		int temp5 = (prodNum % 10);
		cout << temp5 << endl;

		/*
		2. Add the digits in the even - numbered positions (second, fourth, sixth, etc.)
		to the result in step 1. Do not include the last small number in the sum as that
		value is the checkdigit.
		*/

		int temp6 = ((manuNum / 10000) % 10);
		cout << temp6 << ' ';

		int temp7 = ((manuNum / 100) % 10);
		cout << temp7 << ' ';

		int temp8 = (manuNum % 10);
		cout << temp8 << ' ';

		int temp9 = ((prodNum / 1000) % 10);
		cout << temp9 << ' ';

		int temp10 = ((prodNum / 10) % 10);
		cout << temp10 << endl;

		/*
		3. Take the result from step2 and modulo 10 (i.e.the remainder when divided by 10…10
		goes into 58 5 times with 8 leftover).
		*/

		/*
		4. If the modulo result is not zero, subtract the result from ten. The difference is the
		calculated check digit. If the module result is 0, then 0 is the calculated check digit.
		For example, from the first image above, the UPC - A barcode is "05150024163 9" where x
		is the unknown check digit, x can be calculated by
		*/

		// adding the odd - position digits(0 + 1 + 0 + 2 + 1 + 3 = 7),
		// multiplying by three(7 × 3 = 21),
		// adding this result to the sum of the even - position digits(21 + (5 + 5 + 0 + 4 + 6) = 41),
		// calculating modulo ten(41 mod 10 = 1),
		// subtracting from ten(10 − 1 = 9).

		/*
		The check digit is thus 9. Confirm the check digit with the first UPC image above,
		notice the last small digit is 9 ? That last small digit is the checksum as shown
		on the UPC barcode itself.
		*/

		cin >> yOrN;

	}
	
	return 0;
}