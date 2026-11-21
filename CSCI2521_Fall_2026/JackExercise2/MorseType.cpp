#include "MorseType.h"

MorseType::MorseType(int s) {
	size = s;
	string letters[size];
	this->letters = letters;
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