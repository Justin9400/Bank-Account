#include "account.h"
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <string>
#include <time.h>       
#include <tuple>
using namespace std;

//Asks the user for the name of the account holder
string account::set_account_name()
{
	string account_name, first_name, last_name;

	cout << "\t\t\t\t Enter the name of the account holder: "; //Asks the user for the name the account will be under
	cin.ignore();
	getline(cin, account_name);
	cout << endl;

	return account_name;
}

//Creates a random 10 digit account number
int account::set_account_number()
{
	srand(time(0));
	int account_number = (rand() % 9 + 1); //Sets the account number as a random single digit number 

	for (int i = 0; i < 9; i++) //Runs 10 times
	{
		int b = rand() % 9; //Sets b as a random single digit number  
		account_number = (account_number * 10) + b; //Multiplies original random digit by 10 and adds the second random digit to the end of it (a way to append/concatenate integers)
	}

	account_number = abs(account_number); //Makes sure it is not a negative number
	cout << "\t\t\t\t    Here is your account number: " << account_number << endl << endl; //Prints out random account number

	return account_number;
}

//Asks the user for the type of account they would like to create
string account::set_account_type()
{
	string account_type;
	cout << "\t\t    Choose the type of acccount you wish to create (Checking or Savings): "; //Asks the user for the type of account they want to make 
	cin >> account_type;
	cout << endl;

	return account_type;
}

//void account::show_account_info()
//{
//
//}
//void account::edit_account()
//{
//
//}
//void account::deposit()
//{
//	cout << "What account would you like to deposit money into? ";
//
//}
//void account::withdraw()
//{
//	cout << "What account would you like to withdraw money from? ";
//}
//void account::show_report()
//{
//
//}
//int account::return_account_number()
//{
//
//}
//int account::return_account_balance()
//{
//
//}
//string account::return_account_type()
//{
//
//}

//Returns the name of the account holder
string account::return_account_name(string account_name)
{
	return account_name;
}

//Returns the account number
int account::return_account_number(int account_number)
{
	return account_number;
}

//returns the account type
string account::return_account_type(string account_type)
{
	return account_type;
}