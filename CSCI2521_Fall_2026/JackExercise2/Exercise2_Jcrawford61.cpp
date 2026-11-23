/**
 * @file Exercise2_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-11-22
 * @brief This program translates text to morse code, as well as morse code to text
 */

#include <iostream>
#include <string>
#include "MorseConverter.h"
#include "MorseType.h"

using namespace std;

/**
 * @brief Entry point for morse translator.
 * @param None
 * @return 0 to indicate success.
 */
int main() {

	MorseConverter mc = MorseConverter();
	string selection = "";
	string input = "";

	while (selection != "3") {
		
		cout << "Type '1' for text to morse" << endl;
		cout << "Type '2' for morse to text" << endl;
		cout << "Type '3' to quit" << endl;
		
		getline(cin, selection);

		if (selection == "1") {
			getline(cin, input);
			MorseType morseInput = MorseType(input.size());
			morseInput.MorseToMorse(mc.convertToMorse(input));
			cout << morseInput.OutputAsString() << endl;
		}
		else if (selection == "2") {
			getline(cin, input);
			MorseType morseInput = MorseType(input);
			cout << mc.convertToLetters(morseInput) << endl;
		}
		else if (selection == "3") {
			cout << "Thanks for using my translator! :)" << endl;
		}
		else {
			cout << "Invalid Selection! Please try again." << endl;
		}

	}

	return 0;
}