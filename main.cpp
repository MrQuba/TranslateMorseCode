#include <vector>
#include <iostream>

using namespace std;
string input() {
	string userInput;
	cout << "Input text in morse code you want to decipher: " << endl;
	cin >> userInput;
	return userInput;
}
bool endOfLetter(char input) {
		if (input == '/') return true;
		else return false;
}
char decipherMorseCode(vector<string> lookUp, string input, vector<string> translation) {
	char result = '0';
	for (int index = 0; index < lookUp.size(); index++) {
		cout << "Inputted letter to decipher: " << input << endl;
		cout << "Morse code letter with index " << index << ": " << lookUp[index] << endl;
		if (input == lookUp[index]) {
			result = translation[index][0];
			cout << "Deciphering letter " << input << " result: " << result << endl;
			break;
		}
	}
	return result;
}
int main() {

	vector<string> morseCode = {
		".-/", // A
		"-.../", // B
		"-.-./", // C
		"-../", // D
		"./", // E
		"..-./", // F
		"--./", // G
		"..../", // H
		"../", // I
		".---/", // J
		"-.-/", // K
		".-../", // L
		"--/", // M 
		"-./", // N
		"---/", // O
		".--./", // P
		"--.-/", // Q
		".-./", // R
		".../", // S
		"-/", // T
		"..-/", // U
		"...-/", // V
		".--/", // W
		"-..-/", // X
		"-.--/", // Y
		"--../", // Z 
	};
	vector<string> alphabet = {
		"a",
		"b",
		"c",
		"d",
		"e",
		"f",
		"g",
		"h",
		"i",
		"j",
		"k",
		"l",
		"m",
		"n",
		"o",
		"p",
		"q",
		"r",
		"s",
		"t",
		"u",
		"v",
		"w",
		"x",
		"y",
		"z",
	};
	string userInput = input();
	string temp;
	string result;
	for (int i = 0; i < userInput.size(); i++) {
		cout << endl << i + 1 << ". repetition of loop: " << userInput[i];
		temp += userInput[i];
		if (endOfLetter(userInput[i])) {
			cout << " encountered end of letter" << endl;
			result += decipherMorseCode(morseCode, temp, alphabet);
			cout << "Result of iteration is: " << result << endl;
			temp.clear();
		}

	}
	cout << endl << "Result of deciphering morse code is: " << result << endl;


}
