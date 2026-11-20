#pragma once
#include <iostream>
#include <string>

using namespace std;

class MorseConverter {
public:
	string convertToMorse(string in);
private:
	string numString(char letter);
};