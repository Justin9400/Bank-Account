#pragma once

#include <iostream>
#include <fstream>
using namespace std;

class read_into_files
{
	public:
		vector <string> read_in_names();
		bool check_if_name_in_file(string full_name, vector<string>& vector_of_names);
};


