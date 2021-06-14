#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Read Files.h"
using namespace std;

//Reads in the list of client names from the file and stores them in a vector
vector <string> read_into_files::read_in_names()
{
	bool comma = false;

	ifstream check_file("names.txt"); //Reads in the file names.txt
	vector<string> names;

	for (string current; getline(check_file, current);)
	{
		names.push_back(move(current));
	}
	//cout << "Read " << names.size() << " names" << std::endl;

	//prints each name in the vector 
	//cout << "names read in:\n";
	/*for (const auto& name : names)
	{
		if (exchange(comma, true))
		{
			cout << ", ";
		}
		cout << name;
	}*/
	cout << endl;

	return names;
}

//Checks is the name given by the user is in the list of client names
bool read_into_files::check_if_name_in_file(string full_name, vector<string>& vector_of_names)
{
	bool inFile = false;
	if (find(vector_of_names.begin(), vector_of_names.end(), full_name) != vector_of_names.end()) //If the name given by the user is in the file of client nammes
	{
		inFile = true;
	}
	return inFile;
}