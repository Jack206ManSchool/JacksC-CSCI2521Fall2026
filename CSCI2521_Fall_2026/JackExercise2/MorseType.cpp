#include "MorseType.h"

MorseType::MorseType(int s) {
	size = s;
	this->letters = new string[s];
}

void MorseType::SetMIndex(int index, string value){
	letters[index] = value;
}

string MorseType::GetMIndex(int index) {
	return letters[index];
}

int MorseType::GetMSize() {
	return size;
}

string MorseType::OutputAsString() {
	string morse = "";

	for (int i = 0; i <= size - 1; i++) {
		morse += GetMIndex(i);
	}

	return morse;
}

string* MorseType::OutputLettersRaw() {
	return letters;
}

void MorseType::MorseToMorse(MorseType morse2) {
	letters = morse2.OutputLettersRaw();
	size = (*letters).size();
}