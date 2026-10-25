/**
 * @file Source.cpp
 * @author Jack Crawford
 * @date 2026-10-22
 * @brief A banking simulation interacting with Account and Customer objects.
 */

#include<iostream>
#include "Account.h"

void printMenu();
int getMenuOption();
bool isAmountValid(double amount);
bool isMenuChoiceValid(int choice);
void printInvalidMenuChoiceMessage();

const int DEPOSIT = 1;
const int WITHDRAWAL = 2;
const int CLOSE_OF_BUSINESS = 3;
const int QUIT = 4;

/**
 * @brief Entry point for the banking application.
 * @return 0 to indicate success.
 */
int main()
{
    // just use dummy data for now for the customer and the account
    // we care about interacting with account object for this lab
    Customer customer("0123456789", "customer@cscc.edu");
    Account account("5423678409", 100.00, customer);
    account.printAccountInfo();


        
    int menuChoice = getMenuOption();
    while (menuChoice != QUIT)
    {
        switch (menuChoice)
        {
        case DEPOSIT:
            // Prompt the user to enter a deposit amount.
            cout << "Please enter your deposit amount: ";
            cin >> menuChoice;
            // Validate the input(must be $ > 0$) using the provided isAmountValid function
            if (isAmountValid(menuChoice)) {
                // Call the account object's .deposit() function.
                account.deposit(menuChoice);
                cout << "Successfully deposited $" << menuChoice << '!';
            }
            else {
                cout << "ERROR! That is not a valid amount!";
            }

            break;
        case WITHDRAWAL:
            /*
            TODO: Gather the withdrawal amount input and validate it is > 0.
            Add the code that interacts with the account object to add
            a widthdrawal to the account.
            
            Case WITHDRAWAL :
                Prompt the user to enter a withdrawal amount.
                Validate the input(must be $ > 0$).
                If valid, call the account object's .withdraw() function.
            */
            break;
        case CLOSE_OF_BUSINESS:
            /*
            TODO: Add the code that interacts with the account object to perform
            the close of business account balancing.
            Case CLOSE_OF_BUSINESS :
                Call the account object's .closeOfBusiness() function.
                Note : The Account class uses the accumulate function(from the <numeric> library) 
                to sum up transactions and update the balance when this is called.
            */
            break;
        }

        menuChoice = getMenuOption();
    }
}

void printMenu()
{
    cout << "\nCSCC Bank and Trust" << endl;
    cout << "Select an option:" << endl;
    cout << DEPOSIT << ". Make a deposit" << endl;
    cout << WITHDRAWAL << ". Make a withdrawal" << endl;
    cout << CLOSE_OF_BUSINESS << ". Close of Business" << endl;
    cout << QUIT << ". Quit" << endl;
}

int getMenuOption()
{
    int choice = 0;

    do
    {
        printMenu();
        cin >> choice;

        if (!isMenuChoiceValid(choice))
        {
            printInvalidMenuChoiceMessage();
        }
    } while (!isMenuChoiceValid(choice));

    return choice;
}

bool isMenuChoiceValid(int choice)
{
    return choice >= DEPOSIT and choice <= QUIT;
}

bool isAmountValid(double amount)
{
    return amount > 0;
}

void printInvalidMenuChoiceMessage()
{
    cout << "Invalid option selected. Please try again." << endl;
}