#pragma once
#include <string>

using namespace std;

class MorseType {
	public:
		MorseType(int s);
		void SetMIndex(int index, string value);
		string GetMIndex(int index);
		int GetMSize();
		string OutputAsString();
		void MorseToMorse(MorseType morse2);
	private:
		int size;
		string* letters;
		string* OutputLettersRaw();
};