/**
 * @file Lab6_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-10-12
 * @brief Compare static arrays and vectors for processing student scores.
 */
#include<iostream>

using namespace std;

void arraySolution();
void vectorSolution();

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
	int inputScores[arrayLength];

	//	Prompt the user to enter up to 10 integer test scores, one at a time.
	cout << "Please enter 10 integer test scores: " << endl;
	for (int i = 0; i < arrayLength; i++) {
		cin >> inputScores[i];
	}
	
	//	Validate that each score is between 0 and 100, Store valid scores in the array.
	int correctedScores[arrayLength];
	int arrayLength2 = 0;
	for (int i = 0; i < arrayLength; i++) {
		if (inputScores[i] >= 0 && inputScores[i] <= 100) {
			correctedScores[i] = inputScores[i];
			arrayLength2 += 1;
		}
		else {
			correctedScores[i] = 0;
		}
	}

	//	After 10 scores are entered, calculate and display:
	//		The average score.
	//		The highest score.
	//		The lowest score.
	int averageScore = correctedScores[0];
	int highestScore = correctedScores[0];
	int lowestScore = correctedScores[0];
	for (int i = 0; i < arrayLength; i++) {
		averageScore += correctedScores[i];
		if (correctedScores[i] > highestScore) {
			highestScore = correctedScores[i];
		}
		if (correctedScores[i] < lowestScore) {
			lowestScore = correctedScores[i];
		}
	}
	averageScore /= arrayLength2;

	cout << "The average score: " << averageScore << endl;
	cout << "The highest score: " << highestScore << endl;
	cout << "The lowest score: " << lowestScore << endl;

	for (int i : correctedScores) {
		cout << i << endl;
	}


}


/**
	//@brief : Explain that this function calculates statistics using a dynamic vector.
	//@param : None.
	//@return: None(void).
 */
void vectorSolution(){

	//	Declare an empty vector<int>.
	
	//	Prompt the user to enter scores one at a time.
	
	//	Continue accepting scores until the user enters - 1 to indicate they are done.
	
	//	Validate that any value other than - 1 is between 0 and 100.
	
	//	Use push_back() to store valid scores in the vector.
	
	//	After input is complete, calculate and display:
	//		The average score.
	//		The highest score.
	//		The lowest score.
	
	//Sort the scores in ascending order using std::sort(requires <algorithm>) and display the sorted list.

}

//	Extra Credit(10 Points) - Added in Grade book as separate line item
//	To earn extra credit, you must create separate helper functions for the statistical calculations rather than doing them inline.If you implement these, they must also be documented with Doxygen.
//	Recommended Prototypes :
//	Array Helper Functions :
//	float calculateAverage(const int arr[], int size);
//	int findMax(const int arr[], int size);
//	int findMin(const int arr[], int size);
//	Vector Helper Functions :
//	float calculateAverage(const std::vector<int>&vec);
//	int findMax(const std::vector<int>&vec);
//	int findMin(const std::vector<int>&vec);