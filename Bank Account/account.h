#pragma once
#include <iostream>
using namespace std;

class account
{
	protected:
		string account_name;
		int account_number;
		string account_type;
		double account_balance;
	public:
		string set_account_name(); //Asks the user for the name the account will be under
		int set_account_number(); //Creates a random 10 digit account number 
		string set_account_type(); //Asks the user for the type of account the user would like to create
		string return_account_name(string account_name); //Returns the name the account is under 
		int return_account_number(int account_number); //Returns the account number
		string return_account_type(string account_type); //Returns the type of account 
		//void create_account();
		void show_account_info(); //Shows your account information (name account is under, account number, types of accounts you have)
		void edit_account();
		void deposit();
		void withdraw();
		void show_report();
		int return_account_balance();

};


