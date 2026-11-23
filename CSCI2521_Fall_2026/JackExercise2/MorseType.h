#pragma once
#include <string>
#include <vector>

using namespace std;

class MorseType {
	public:
		MorseType(int s);
		MorseType(string s);
		void SetMIndex(int index, string value);
		string GetMIndex(int index);
		int GetMSize();
		string OutputAsString();
		void MorseToMorse(MorseType morse2);
	private:
		vector<string>* letters;
		vector<string>* OutputLettersRaw();
		const int maxSize = 50;
};