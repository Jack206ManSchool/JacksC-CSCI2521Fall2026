#include "MorseType.h"

MorseType::MorseType(int s = 0) {
	letters = new vector<string>(s);
}

MorseType::MorseType(string input) {
	letters = new vector<string>(0);
	int i = 0;
	input = " " + input + " ";

	while (input.find(' ', i) != string::npos) {
		letters->push_back(input.substr(i, input.find(' ', i)));
		cout << letters->at(i) << endl;
		i = (input.find(' ', i));
		cout << i << endl;
	}

}

//MorseType::~MorseType() {
//	delete letters;
//}

void MorseType::SetMIndex(int index, string value){
	letters->at(index) = value;
}

string MorseType::GetMIndex(int index) {
	return letters->at(index);
}

int MorseType::GetMSize() {
	return letters->size();
}

string MorseType::OutputAsString() {
	string morse = "";
	
	for (int i = 0; i <= letters->size()-1; i++) {
		morse += (GetMIndex(i) + " ");
	}

	return morse;
}

vector<string>* MorseType::OutputLettersRaw() {
	return letters;
}

void MorseType::MorseToMorse(MorseType morse2) {
	letters = morse2.OutputLettersRaw();
}