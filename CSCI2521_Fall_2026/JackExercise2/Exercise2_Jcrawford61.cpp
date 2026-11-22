#include <iostream>
#include <string>
#include "MorseConverter.h"
#include "MorseType.h"

using namespace std;

int main() {

	MorseConverter mc = MorseConverter(); 
	string input = "";

	// Numbers: 48-57 Letters (Upper): 65-90 Letters (lower): 97-122
	getline(cin, input);

	MorseType morseInput = MorseType(input.size());
	
	morseInput.MorseToMorse(mc.convertToMorse(input));

	cout << morseInput.OutputAsString() << endl;

	return 0;
}