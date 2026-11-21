#include <string>
#include "MorseType.h"

using namespace std;

class MorseConverter {
	public:
		MorseConverter();
		string convertToLetters(MorseType in);
		MorseType convertToMorse(string in);
	private:
		string numString(char letter);
		char stringNum(string letter);
};
