/**
 * @file MorseType.cpp
 * @author Jack Crawford
 * @date 2026-11-22
 * @brief A dedicated class for storing the morse code
 */

#include "MorseType.h"

/**
  * @brief Morsetype Constructor (int)
  * @param int s (size of letters vector)
  * @return none (void)
*/
MorseType::MorseType(int s = 0) {
	if (s <= maxSize) {
		letters = new vector<string>(s);
	}
	else {
		letters = new vector<string>(50);
	}
}

/**
  * @brief Morsetype Constructor (string)
  * @param string input (morse string to save)
  * @return none (void)
*/
MorseType::MorseType(string input) {
	letters = new vector<string>(0);
	int i = 0;
	input = input + "  ";
	string emptyCheck;

	while (input.find(' ') != string::npos && letters->size() <= maxSize) {
		emptyCheck = input.substr(0, input.find(' '));
		if (emptyCheck != "") {
			letters->push_back(input.substr(0, input.find(' ')));
		}
		else {
			letters->push_back("Blank!");
		}
		input = input.substr(input.find(' ') + 1);
		i++;
	}

}

/**
  * @brief Sets an index of the letters vector
  * @param int index, string value
  * @return none (void)
*/
void MorseType::SetMIndex(int index, string value){
	letters->at(index) = value;
}

/**
  * @brief Gets a specified index of the letters vector
  * @param int index
  * @return none (void)
*/
string MorseType::GetMIndex(int index) {
	return letters->at(index);
}

/**
  * @brief Gets the size of Letters vector
  * @return none (void)
*/
int MorseType::GetMSize() {
	return letters->size();
}

/**
  * @brief Outputs the morse code as a displayable string
  * @return string
*/
string MorseType::OutputAsString() {
	string morse = "";
	
	for (int i = 0; i <= letters->size()-1; i++) {
		morse += (GetMIndex(i) + " ");
	}

	return morse;
}

/**
  * @brief Returns the raw letters vector
  * @return vector<string>*
*/
vector<string>* MorseType::OutputLettersRaw() {
	return letters;
}

/**
  * @brief Sets the content of one morse type to the value of the other
  * @param MorseType morse2 (value to set)
  * @return none (void)
*/
void MorseType::MorseToMorse(MorseType morse2) {
	letters = morse2.OutputLettersRaw();
}