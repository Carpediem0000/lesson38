#include "PriorityQueue.h"
#include "Music.h"
#include <vector>
#include <Windows.h>
#include "Human.h"
#include "Thread.h"
#define TASK 5

int main()
{
#if TASK == 1
	myQueue::Queue<int> q;

	q.push_back(7);
	q.push_back(1);
	q.push_back(-6);
	q.push_back(124);
	q.push_back(0);

	q.show();
	cout << "--------------------------\n";

	while (!q.isEmpty())
	{
		cout << "First: " << q.first() << endl;
		q.pop_front();
		q.show();
		cout << endl;
	}
#endif // TASK == 1
#if TASK == 2
	vector<Music> music;
	ifstream file("music.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			Music obj;
			obj.load(file);
			music.push_back(obj);
		}
		file.close();
		cout << "size of folder: " << music.size() << endl;
	}

	cout << "-----------------------\n";

	myQueue::Queue<Music> player;

	player.push_back(music[rand() % music.size()]);
	player.push_back(music[rand() % music.size()]);
	player.push_back(music[rand() % music.size()]);

	
	while (!player.isEmpty())
	{
		cout << "Playing...\n";
		player.first().show();
		player.pop_front();
		Sleep(2000);
		//system("cls");
	}
#endif // TASK == 2
#if TASK == 3
	myQueue::PriorityQueue<int> q2;
	q2.push_back(5);
	q2.show();

	q2.push_back(-45);
	q2.show();

	q2.push_back(234);
	q2.show();

	q2.push_back(0);
	q2.show();

	q2.push_back(90);
	q2.show();

	cout << "==========================\n";

	while (!q2.isEmpty())
	{
		cout << q2.first() << endl;
		q2.pop_front();
	}
#endif // TASK == 3
#if TASK == 4

	myQueue::PriorityQueue<Human> q3;

	q3.push_back(Human("Bob1", 1, 0, 1, 1, 1));
	q3.push_back(Human("Bob2", 0, 0, 0, 0, 1));
	q3.push_back(Human("Bob3", 1, 0, 1, 0, 1));
	q3.push_back(Human("Bob4", 1, 1, 1, 1, 1));
	q3.push_back(Human("Bob5", 1, 0, 0, 0, 1));

	while (!q3.isEmpty())
	{
		q3.first().show();
		q3.pop_front();
	}
#endif // TASK == 4
#if TASK == 5
	vector<Thread> thread;
	ifstream file("threads.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			Thread obj;
			obj.load(file);
			thread.push_back(obj);
}
		file.close();
		cout << "size of folder: " << thread.size() << endl;
	}

	myQueue::PriorityQueue<Thread> q4;

	for (auto obj : thread)
	{
		q4.push_back(obj);
	}
	while (!q4.isEmpty())
	{
		q4.first().show();
		q4.pop_front();
	}

#endif // TASK == 5
#if TASK == 6

#endif // TASK == 6
#if TASK == 7

#endif // TASK == 7

}