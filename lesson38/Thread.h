#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Thread
{
	string name;
	int priority;
	int time;
public:
	Thread();
	Thread(string name, int priority, int time);

	bool operator<(const Thread& obj)const;

	void show()const;
	void load(ifstream& file);
};

