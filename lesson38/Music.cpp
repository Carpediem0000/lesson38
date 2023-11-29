#include "Music.h"

Music::Music()
{
    this->name = "-";
    this->author = "-";
    this->year = 0;
}

Music::Music(string name, string author, int year)
{
    this->name = name;
    this->author = author;
    this->year = year;
}

string Music::getName() const
{
    return name;
}

string Music::getAuthor() const
{
    return author;
}

int Music::getYear() const
{
    return year;
}

void Music::show() const
{
    cout << "Name: " << name << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
}

void Music::load(ifstream& file)
{
    getline(file, name);
    getline(file, author);
    file >> year;
    file.get();
}
