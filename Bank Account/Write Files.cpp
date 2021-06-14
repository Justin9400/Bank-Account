#include <iostream>
#include <fstream>
#include "Write Files.h"
using namespace std;

//adds the users name to the list of client names 
void write_into_files::add_name_into_names_file(string full_name, string namesTextFile)
{
	ofstream myFile;
	myFile.open(namesTextFile, ios_base::app);
	myFile << full_name << endl;
	myFile.close();
}

//Creates a new text file if there is no account under the users name
void write_into_files::create_new_text_file(string full_name, string Client_Files_Path)
{
	string client_file_name = (full_name + ".txt"); //Sets the file name as a variable
	client_file_name.erase(remove_if(client_file_name.begin(), client_file_name.end(), ::isspace), client_file_name.end()); //Gets rid of the space between full_name and .txt
	string Client_info_path = "C:/Users/Justk/source/repos/Bank Account/Client Files/" + client_file_name;
	ofstream client_file(Client_info_path.c_str()); //Creates the text file with the name of the user
}

//Writes the clients name into the clients file 
void write_into_files::write_account_name_into_file(string account_name, string client_file_path)
{
	ofstream myFile;
	myFile.open(client_file_path, ios_base::app);
	myFile << "Account Name: " << account_name << endl;
	myFile.close();
}

//Writes the clients account number into the clients file 
void write_into_files::write_account_number_into_file(int account_number, string client_file_path)
{
	ofstream myFile;
	myFile.open(client_file_path, ios_base::app);
	myFile << "Account Number: " << account_number << endl;
	myFile.close();
}

//Writes the clients account type into the clients file 
void write_into_files::write_account_type_into_file(string account_type, string client_file_path)
{
	ofstream myFile;
	myFile.open(client_file_path, ios_base::app);
	myFile << "Account Type: " << account_type << endl;
	myFile.close();
}