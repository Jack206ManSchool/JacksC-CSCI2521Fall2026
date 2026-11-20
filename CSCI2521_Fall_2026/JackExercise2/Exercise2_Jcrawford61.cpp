#include <iostream>
#include <string>

using namespace std;

string numString(char letter) {

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

string convertToMorse(string in){
	string morse = "";

	for (int i = 0; i <= in.length()-1; i++) {
		morse += (numString(in.at(i)) + " ");
	}

	return morse;
}

int main() {

	string input = "";

	// Numbers: 48-57 Letters (Upper): 65-90 Letters (lower): 97-122
	getline(cin, input);

	cout << convertToMorse(input) << endl;

	return 0;
}