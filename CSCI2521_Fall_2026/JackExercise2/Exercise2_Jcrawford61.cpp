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

	cout << mc.convertToMorse(input) << endl;

	return 0;
}