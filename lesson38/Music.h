#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Music
{
protected:
	string name;
	string author;
	int year;
public:
	Music();
	Music(string name, string author, int year);

	string getName()const;
	string getAuthor()const;
	int getYear()const;

	void show()const;

	void load(ifstream& file);
};

