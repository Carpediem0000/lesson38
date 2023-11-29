#include "Thread.h"

Thread::Thread()
{
    this->name = "-";
    this->priority = 0;
    this->time = 0;
}

Thread::Thread(string name, int priority, int time)
{
    this->name = name;
    this->priority = priority;
    this->time = time;
}

bool Thread::operator<(const Thread& obj) const
{
    return priority < obj.priority;
}

void Thread::show() const
{
    cout << "Name: " << name << endl;
    cout << "Priority: " << priority << endl;
    cout << "Time: " << time << endl;
}

void Thread::load(ifstream& file)
{
    file >> name;
    file >> priority;
    file >> time;
}
