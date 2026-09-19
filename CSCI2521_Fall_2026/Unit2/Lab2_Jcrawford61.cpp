/**
 * @file Lab2_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-09-11
 * @brief A program to calculate the perimeter of a rectangle from user input.
*/

#include<iostream>

using namespace std;

int main() {

	double inputLength, inputWidth, perimeterOutput;

	cout << "This application will calculate the perimeter of a rectangle." << endl;
	
	cout << endl << "Please enter the length of the rectangle: ";
	cin >> inputLength;

	cout << "Please enter the width of the rectangle: ";
	cin >> inputWidth;

	perimeterOutput = 2 * (inputLength + inputWidth);

	cout << "The perimeter of the rectangle is: " << perimeterOutput << endl;

	return 0;
}