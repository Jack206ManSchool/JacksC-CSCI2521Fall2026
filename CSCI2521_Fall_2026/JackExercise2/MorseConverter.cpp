#include "MorseConverter.h"

MorseConverter::MorseConverter(){};

string MorseConverter::numString(char letter) {

	if (letter >= 97) {
		letter -= 32;
	}

	if (letter == 48) { return "-----"; }
	else if (letter == 49) { return ".----"; }
	else if (letter == 50) { return "..---"; }
	else if (letter == 51) { return "...--"; }
	else if (letter == 52) { return "....-"; }
	else if (letter == 53) { return "....."; }
	else if (letter == 54) { return "-...."; }
	else if (letter == 55) { return "--..."; }
	else if (letter == 56) { return "---.."; }
	else if (letter == 57) { return "----."; }
	else if (letter == 65) { return ".-"; }
	else if (letter == 66) { return "-..."; }
	else if (letter == 67) { return "-.-."; }
	else if (letter == 68) { return "-.."; }
	else if (letter == 69) { return "."; }
	else if (letter == 70) { return "..-."; }
	else if (letter == 71) { return "--."; }
	else if (letter == 72) { return "...."; }
	else if (letter == 73) { return ".."; }
	else if (letter == 74) { return ".---"; }
	else if (letter == 75) { return "-.-"; }
	else if (letter == 76) { return ".-.."; }
	else if (letter == 77) { return "--"; }
	else if (letter == 78) { return "-."; }
	else if (letter == 79) { return "---"; }
	else if (letter == 80) { return ".--."; }
	else if (letter == 81) { return "--.-"; }
	else if (letter == 82) { return ".-."; }
	else if (letter == 83) { return "..."; }
	else if (letter == 84) { return "-"; }
	else if (letter == 85) { return "..-"; }
	else if (letter == 86) { return "...-"; }
	else if (letter == 87) { return ".--"; }
	else if (letter == 88) { return "-..-"; }
	else if (letter == 89) { return "-.--"; }
	else if (letter == 90) { return "--.."; }
	else { return "/ "; }

}

char MorseConverter::stringNum(string letter) {

	if (letter == "-----") { return 48; }
	else if (letter == ".----") { return 49; }
	else if (letter == "..---") { return 50; }
	else if (letter == "...--") { return 51; }
	else if (letter == "....-") { return 52; }
	else if (letter == ".....") { return 53; }
	else if (letter == "-....") { return 54; }
	else if (letter == "--...") { return 55; }
	else if (letter == "---..") { return 56; }
	else if (letter == "----.") { return 57; }
	else if (letter == ".-") { return 65; }
	else if (letter == "-...") { return 66; }
	else if (letter == "-.-.") { return 67; }
	else if (letter == "-..") { return 68; }
	else if (letter == ".") { return 69; }
	else if (letter == "..-.") { return 70; }
	else if (letter == "--.") { return 71; }
	else if (letter == "....") { return 72; }
	else if (letter == "..") { return 73; }
	else if (letter == ".---") { return 74; }
	else if (letter == "-.-") { return 75; }
	else if (letter == ".-..") { return 76; }
	else if (letter == "--") { return 77; }
	else if (letter == "-.") { return 78; }
	else if (letter == "---") { return 79; }
	else if (letter == ".--.") { return 80; }
	else if (letter == "--.-") { return 81; }
	else if (letter == ".-.") { return 82; }
	else if (letter == "...") { return 83; }
	else if (letter == "-") { return 84; }
	else if (letter == "..-") { return 85; }
	else if (letter == "...-") { return 86; }
	else if (letter == ".--") { return 87; }
	else if (letter == "-..-") { return 88; }
	else if (letter == "-.--") { return 89; }
	else if (letter == "--..") { return 90; }
	else { return ' '; }

}

string MorseConverter::convertToLetters(MorseType in) {
	string translated = "";

	for (int i = 0; i <= in.GetMSize() - 1; i++) {
		translated += (stringNum(in.GetMIndex(i)));
	}

	return translated;
}

MorseType MorseConverter::convertToMorse(string in) {
	string morse = "";

	for (int i = 0; i <= in.length() - 1; i++) {
		morse += (numString(in.at(i)) + " ");
	}

	return morse;
}