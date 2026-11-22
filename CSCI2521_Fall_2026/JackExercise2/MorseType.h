#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class MorseType {
	public:
		MorseType(int s);
		MorseType(string s);
		//~MorseType();
		void SetMIndex(int index, string value);
		string GetMIndex(int index);
		int GetMSize();
		string OutputAsString();
		void MorseToMorse(MorseType morse2);
	private:
		vector<string>* letters;
		vector<string>* OutputLettersRaw();
};