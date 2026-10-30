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
	cout << "Stack Variable(stackInt) :" << endl;
	cout << "\t" << "Value: " << stackInt << endl;
	cout << "\t" << "Address : " << &stackInt << endl;

	//	Print the value stored at heapInt and the memory address where it is stored.
	cout << "Heap Variable(heapInt) :" << endl;
	cout << "\t" << "Value : " << *heapInt << endl;
	cout << "\t" << "Address : " << heapInt << endl;

	//	Print the value pointed to by ptrToStack and the address stored in the pointer itself.
	cout << "Pointer to Stack(ptrToStack) :" << endl;
	cout << "\t" << "Value Pointed To : " << *ptrToStack << endl;
	cout << "\t" << "Address Stored : " << ptrToStack << endl;

	//	Print the value referred to by refToStack and its memory address.
	cout << "Reference to Stack(refToStack) :" << endl;
	cout << "\t" << "Value Referred To : " << refToStack << endl;
	cout << "\t" << "Address : " << &refToStack << endl;

	//Cleanup : Ensure any memory dynamically allocated(the heap variable) is properly deleted to prevent memory leaks
	delete heapInt;
	delete ptrToStack;

}