// TruthTable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	bool quit = false;

	while (!quit)
	{
		using namespace std;
		string input;
		cout << "Please enter a well formed propositional logic formula." << endl;
		getline(cin, input);
		istringstream is{input};


		quit = true;
	}
	
    return 0;

}

