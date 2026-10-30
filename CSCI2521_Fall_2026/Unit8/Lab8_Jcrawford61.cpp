/**
 * @file Lab8_Jcrawford61.cpp
 * @author Jack Crawford
 * @date 2026-10-30
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */
#include <iostream>

using namespace std;

/**
 * @brief Entry point for the memory demonstration.
 * @param None
 * @return 0 to indicate success.
 */
int main(){

	// Declare an int variable on the stack named stackInt.
	int stackInt = 4;
	
	// Dynamically allocate an int variable on the heap using the new keyword with a pointer named heapInt.
	int* heapInt = new int(2);

	// Pointer Creation : Create a pointer to the stack variable(stackInt) named ptrToStack.
	int* ptrToStack = &stackInt;
	
	// Reference Creation : Create a reference to the stack variable(stackInt) named refToStack.
	int& refToStack = stackInt;

	//Output :
	//	Print the value of stackInt and its memory address.
	//	Print the value stored at heapInt and the memory address where it is stored.
	//	Print the value pointed to by ptrToStack and the address stored in the pointer itself.
	//	Print the value referred to by refToStack and its memory address.
	
	//Cleanup : Ensure any memory dynamically allocated(the heap variable) is properly deleted to prevent memory leaks.


}