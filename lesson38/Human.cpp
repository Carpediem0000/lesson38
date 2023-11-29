#include "Human.h"

Human::Human()
{
	this->name = "-";
	this->veteran = false;
	this->invakidl = false;
	this->kazah = false;
	this->motherWithBaby = false;
	this->soldier = false;
}

Human::Human(string name, bool veteran, bool invakidl, bool kazah, bool motherWithBaby, bool soldier)
{
	this->name = name;
	this->veteran = veteran;
	this->invakidl = invakidl;
	this->kazah = kazah;
	this->motherWithBaby = motherWithBaby;
	this->soldier = soldier;
}

void Human::show() const
{
	cout << "Name: " << name << endl;
	cout << "Priority: ";
	if (veteran) cout << "Veteran ";
	if (invakidl) cout << "Invalid ";
	if (kazah) cout << "Kazah ";
	if (motherWithBaby) cout << "MotherWithBaby ";
	if (soldier) cout << "Soldier ";
	cout << endl;
}

bool Human::operator<(const Human& right) const
{
	return (veteran + invakidl + kazah + motherWithBaby + soldier) <
		(right.veteran + right.invakidl + right.kazah + right.motherWithBaby + right.soldier);
}
