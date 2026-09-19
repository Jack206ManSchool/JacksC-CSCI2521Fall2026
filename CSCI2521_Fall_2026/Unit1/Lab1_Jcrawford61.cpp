/**
 * @file Lab1_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-09-03
 * @brief A simple program to greet the user by name.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {

	string firstName = "";
	string lastName = "";

	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name: ";
	cin >> lastName;

	cout << "Welcome to C++ Programming, " << firstName << ' ' << lastName << '!' << endl;
	
	return 0;
}