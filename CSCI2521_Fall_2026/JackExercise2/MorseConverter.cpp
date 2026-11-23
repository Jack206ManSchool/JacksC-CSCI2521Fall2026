/**
 * @file MorseConverter.cpp
 * @author Jack Crawford
 * @date 2026-11-22
 * @brief The code that does the text to morse code and morse code to text
 */

#include "MorseConverter.h"

/**
   * @brief MorseConverter constructor
   * @return none (void)
*/
MorseConverter::MorseConverter(){};

/**
  * @brief Returns the char as a morse code character string
  * @param char letter (letter to convert)
  * @return string
*/
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
	else if (letter == 32) { return "/ "; }
	else { return "blank"; }

}

/**
* * @brief Returns the morse code letter as a char
  * @param string letter (morse letter to convert)
  * @return char
*/
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
	else { return 32; }

}

/**
* * @brief Returns the morse code MorseType into a readable text string
  * @param MorseType in (morse to convert to string)
  * @return string
*/
string MorseConverter::convertToLetters(MorseType in) {
	string translated = "";

	for (int i = 0; i <= in.GetMSize() - 1; i++) {
		translated += (stringNum(in.GetMIndex(i)));
	}

	return translated;
}

/**
* * @brief Returns the text converted to morse code as a MorseType
  * @param string in (string to convert to morse)
  * @return MorseType
*/
MorseType MorseConverter::convertToMorse(string in) {
	MorseType morse = MorseType(in.length());
	int skips = 0;

	for (int i = 0; i <= in.length() - 1; i++) {
		if(numString(in.at(i)) == "blank") {
			skips += 1;
		}
		else {
			morse.SetMIndex(i - skips, (numString(in.at(i))));
		}
	}

	return morse;
}