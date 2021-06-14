#pragma once
#include <iostream>
#include <fstream>
#include "account.h"
using namespace std;

class write_into_files:public account
{
	public:
		void add_name_into_names_file(string full_name, string namesTextFile);
		void create_new_text_file(string full_name, string Client_Files_Path);
		void write_account_name_into_file(string account_name, string client_file_path);
		void write_account_number_into_file(int account_number, string client_file_path);
		void write_account_type_into_file(string account_type, string client_file_path);
};

