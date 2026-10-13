/**
 * @file Lab6_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-10-12
 * @brief Compare static arrays and vectors for processing student scores.
 */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void arraySolution();
void vectorSolution();

// Array Helpers
float calculateAverage(const int arr[], int size);
int findMax(const int arr[], int size);
int findMin(const int arr[], int size);
// Vector Helpers
float calculateAverage(const std::vector<int>&vec);
int findMax(const std::vector<int>&vec);
int findMin(const std::vector<int>&vec);


/**
	@brief: Entry point of the program.
	@param: None.
	@return: 0 to indicate success.
 */
int main() {

	arraySolution();
	vectorSolution();
	
	return 0;
}

/**
	@brief : Explain that this function calculates statistics using a fixed - size static array.
	@param : None.
	@return: None(void).
 */
void arraySolution() {

	//	Define a static array with a constant size of 10.
	const int arrayLength = 10;
	int arrayLengthValid = 0;
	int input = 0;
	int inputScores[arrayLength];

	//	Prompt the user to enter up to 10 integer test scores, one at a time.
	cout << "First Stop, Arrays!" << endl;
	cout << "Please enter 10 integer test scores: " << endl;
	for (int i = 0; i < arrayLength; i++) {
		cin >> input;
		if (input >= 0 && input <= 100) {
			inputScores[i] = input;
			arrayLengthValid += 1;
		}
		else {
			inputScores[i] = -1;
		}
	}

	//	After 10 scores are entered, calculate and display:
	//		The average score.
	//		The highest score.
	//		The lowest score.
	cout << "The average score: " << calculateAverage(inputScores, arrayLengthValid) << endl;
	cout << "The highest score: " << findMax(inputScores, arrayLengthValid) << endl;
	cout << "The lowest score: " << findMin(inputScores, arrayLengthValid) << endl;

}


/**
	//@brief : Explain that this function calculates statistics using a dynamic vector.
	//@param : None.
	//@return: None(void).
 */
void vectorSolution(){

	//	Declare an empty vector<int>.
	int input = 0;
	vector<int> inputScores;

	//	Prompt the user to enter scores one at a time.
	cout << "Second Stop, Vectors!" << endl;
	cout << "Please enter your integer test scores (type -1 to stop): " << endl;
	//	Continue accepting scores until the user enters - 1 to indicate they are done.
	while (input >= 0) {
		cin >> input;
		//	Validate that any value other than - 1 is between 0 and 100.
		if (input >= 0 && input <= 100) {
			//	Use push_back() to store valid scores in the vector.
			inputScores.push_back(input);
		}
		else {

			if (input != -1) {
				cout << "That is not a valid test score!" << endl;
			}
			else if (inputScores.size() == 0) {
				cout << "You must enter at least 1 valid test score!" << endl;
				input = 0;
			}

		}

	}
	
	//	After input is complete, calculate and display:
	//		The average score.
	//		The highest score.
	//		The lowest score.
	cout << "The average score: " << calculateAverage(inputScores) << endl;
	cout << "The highest score: " << findMax(inputScores) << endl;
	cout << "The lowest score: " << findMin(inputScores) << endl;

	//Sort the scores in ascending order using std::sort(requires <algorithm>) and display the sorted list.
	sort(inputScores.begin(), inputScores.end());
	cout << "Sorted List: " << endl;
	for (int i : inputScores) {
		cout << i << endl;
	}

}

/**
	//@brief : temp
	//@param : temp
	//@return: temp
 */
float calculateAverage(const int inputArr[], int arrSize) {
	float averageScore = 0;
	for (int i = 0; i < arrSize; i++) {
		if (inputArr[i] != -1) {
			averageScore += inputArr[i];
		}
	}
	return 	averageScore /= arrSize;
}
/**
	//@brief : temp
	//@param : temp
	//@return: temp
 */
float calculateAverage(const vector<int>& inputVec) {
	float result = 0;
	for (int i : inputVec) {
		result += i;
	}
	return result / inputVec.size();
}

/**
	//@brief : temp
	//@param : temp
	//@return: temp
 */
int findMax(const int inputArr[], int arrSize) {
	int highestScore = 0;
	for (int i = 0; i < arrSize; i++) {
		if (inputArr[i] > highestScore && inputArr[i] != -1) {
			highestScore = inputArr[i];
		}
	}
	return highestScore;
}
/**
	//@brief : temp
	//@param : temp
	//@return: temp
 */
int findMax(const vector<int>& inputVec) {
	int result = inputVec.at(0);
	for (int i : inputVec) {
		if (i > result) {
			result = i;
		}
	}
	return result;
}

/**
	//@brief : temp
	//@param : temp
	//@return: temp
 */
int findMin(const int inputArr[], int arrSize) {
	int lowestScore = 101;
	for (int i = 0; i < arrSize; i++) {
		if (inputArr[i] < lowestScore && inputArr[i] != -1) {
			lowestScore = inputArr[i];
		}
	}
	return lowestScore;
}
/**
	//@brief : temp
	//@param : temp
	//@return: temp
 */
int findMin(const vector<int>& inputVec) {
	int result = inputVec.at(0);
	for (int i : inputVec) {
		if (i < result) {
			result = i;
		}
	}
	return result;
}