#ifndef MORSECONVERTER_H
#define MORSECONVERTER_H

#include <string>

using namespace std;

class MorseConverter {
	public:
		MorseConverter();
		string convertToMorse(string in);
	private:
		string numString(char letter);
};

#endif
