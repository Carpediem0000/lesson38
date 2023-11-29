#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Human
{
protected:
	string name;
	bool veteran;
	bool invakidl;
	bool kazah;
	bool motherWithBaby;
	bool soldier;
public:
	Human();
	Human(string name, bool veteran, bool invakidl,
		bool kazah, bool motherWithBaby, bool soldier);

	void show()const;

	bool operator<(const Human& right)const;
};

