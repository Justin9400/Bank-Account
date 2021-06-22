//Justin Kachornvanich 
//Bank Account System
//4 December 2020 - Start
//	- End

#include <fstream>
#include <iostream>
#include <stdio.h>    
#include <stdlib.h>     
#include <string>
#include <time.h>       
#include <vector>
#include <windows.h>
#include "account.h"
#include "Write Files.h"
#include "Read Files.h"
using namespace std;

//***************************************************************
//                     FUNCTION DECLARATION
//***************************************************************
void fontSize();
string ask_user_for_full_name();
int menu(string account_name, int account_number, string account_type);
void GoodBye_Screen();
//***************************************************************
//                       MAIN FUNCTION  
//***************************************************************
int main()
{
	int account_number = 0;
	string account_name;
	string account_type;
	string client_file_path;
	fontSize(); //Sets the font style and size

	write_into_files wif;
	read_into_files rif;
	account acc;

	string full_name = ask_user_for_full_name();
	vector <string> names = rif.read_in_names();
	string namesTextFile = "C:/Users/Justk/source/repos/Bank Account/Client Files/names.txt";
	string Client_Files_Path = "C:/Users/Justk/source/repos/Bank Account/Client Files";

	if (rif.check_if_name_in_file(full_name, names) == false)
	{
		string choice;
		cout << "\t\t\t Hello new user. Would you want to create a new account with us (yes/no)? ";
		cin >> choice;

		if (choice == "yes" || choice == "Yes") //If a new client wants to create an account 
		{
			wif.add_name_into_names_file(full_name, namesTextFile); //Adds the name the user gives to the list of client names
			wif.create_new_text_file(full_name, namesTextFile); //Creates a new text file titled the name the user gave
			//system("CLS"); //Clears the screen
			acc.set_account_name(); //Asks the user for the name the account will be under 
			acc.set_account_type(); //Asks the user for the type of account they would like to create
			acc.set_account_number(); //Creates a random 10 digit account number 

			//Writes the account name, number, and type into the clients text file
			wif.write_account_name_into_file(account_name, client_file_path);
			wif.write_account_number_into_file(account_number, client_file_path);
			wif.write_account_type_into_file(account_type, client_file_path);

		}
		else if (choice == "no" || choice == "No") //If the new client does not want to make an account 
		{
			GoodBye_Screen();
		}
	}
	else
	{
		system("CLS"); //Clears the screen
		menu(account_name, account_number, account_type); //Pulls up the menu with options for a returning client
	}	
}


//Sets the font style and size
void fontSize()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 24;                  // Height of each character in the font
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

//Asks the user for their first and last name
string ask_user_for_full_name()
{
	string full_name;

	cout << "\t\t\t\t\t   Enter your full name: ";
	getline(cin, full_name);

	return full_name;
}

//Prints the menu for a returning client and gets the users choice 
int menu(string account_name, int account_number, string account_type)
{
	int choice;
	account acc;

	//Menu options
	cout << "\t\t\t\t\t    Bank Account Management System";
	cout << "\n\n\n\t\t\t\t\t\t     MAIN MENU";
	cout << "\n\t\t\t\t\t\t__________________";
	cout << "\n\n\t\t\t\t\t\t1. NEW ACCOUNT";
	cout << "\n\n\t\t\t\t\t\t2. DEPOSIT AMOUNT";
	cout << "\n\n\t\t\t\t\t\t3. WITHDRAW AMOUNT";
	cout << "\n\n\t\t\t\t\t\t4. BALANCE ENQUIRY";
	cout << "\n\n\t\t\t\t\t\t5. SHOW ACCOUNT INFO";
	cout << "\n\n\t\t\t\t\t\t6. ALL ACCOUNT HOLDER LIST";
	cout << "\n\n\t\t\t\t\t\t7. CLOSE AN ACCOUNT";
	cout << "\n\n\t\t\t\t\t\t8. MODIFY AN ACCOUNT";
	cout << "\n\n\t\t\t\t\t\t9. EXIT";
	cout << "\n\n\t\t\t\t\t\tChoose an option (1-8): ";

	cin >> choice;


	if (choice == 1)
	{
		system("CLS");
	}
	else if (choice == 2)
	{
		system("CLS");
	}
	else if (choice == 3)
	{
		system("CLS");
	}
	else if (choice == 4)
	{
		system("CLS");
	}
	else if (choice == 5)
	{
		acc.return_account_name(account_name);
		acc.return_account_number(account_number);
		acc.return_account_type(account_type);

		system("CLS");
	}
	else if (choice == 6)
	{
		system("CLS");
	}
	else if (choice == 7)
	{
		system("CLS");
	}
	else if (choice == 8)
	{
		system("CLS");
	}
	else if (choice == 9)
	{
		system("CLS");
		exit(0);
	}
	return 0;
}

void GoodBye_Screen()
{
	system("CLS"); //Clear the screen
	cout << "\t\t\t\t\t\t\t    Goodbye"; //Prints Goodbye
	Sleep(1000); //Waits for 1 second
	system("CLS"); //Clears the screen
}