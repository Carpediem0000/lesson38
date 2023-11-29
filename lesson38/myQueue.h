#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace myQueue {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) {
			info = value;
			next = prev = nullptr;
		}
	};

	//Queue - FIFO = first in, first out
	template <typename U>
	class Queue {
	protected:
		Node<U>* head;
		Node<U>* current;
	public:
		Queue() {
			head = current = nullptr;
		}
		~Queue() {
			Node<U>* p = head;
			while (p != nullptr)
			{
				Node<U>* tmp = p;
				p = p->next;				
				delete tmp;
			}
		}//реализация

		bool isEmpty()const {
			return head == nullptr || current == nullptr;
		}//реализация
		U first()const {
			return head->info;
		}//реализация

		void push_back(U value) {
			Node<U>* el = new Node<U>(value);
			if (head == nullptr)
			{
				head = current = el;
			}
			else
			{
				current->next = el;
				el->prev = current;
				current = el;
			}
		}//реализация
		void pop_front() {
			if (head == nullptr)
			{
				cout << "Queue is empty\n";
			}
			else
			{
				if (head->next == nullptr)
				{
					delete head;
					head = current = nullptr;
					return;
				}
				head = head->next;
				delete head->prev;
				head->prev = nullptr;
			}
		}//реализация

		void show()const {
			Node<U>* p = head;
			while (p != nullptr)
			{
				cout << p->info << " ";
				p = p->next;
			}
			cout << endl;
		}//реализация
	};
}