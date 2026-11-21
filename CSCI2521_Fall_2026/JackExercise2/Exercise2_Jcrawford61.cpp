#include <iostream>
#include <string>
#include "MorseConverter.h"

using namespace std;

int main() {

	MorseConverter mc;
	string input = "";

	// Numbers: 48-57 Letters (Upper): 65-90 Letters (lower): 97-122
	getline(cin, input);

	cout << mc.convertToMorse(input) << endl;

	return 0;
}