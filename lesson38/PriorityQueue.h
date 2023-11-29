#pragma once
#include "myQueue.h"

namespace myQueue {

	template<typename U>
	class PriorityQueue : public Queue<U>
	{
	public:
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (Queue<U>::isEmpty()) {
				Queue<U>::head = Queue<U>::current = el;
			}
			else {
				Node<U>* place = Queue<U>::current;
				while (place != nullptr)
				{
					if (value < place->info)
					{
						break;
					}
					place = place->prev;
				}
				if (place == nullptr)
				{
					Queue<U>::head->prev = el;
					el->next = Queue<U>::head;
					Queue<U>::head = el;
				}
				else if (place == Queue<U>::current)
				{
					Queue<U>::current->next = el;
					el->prev = Queue<U>::current;
					Queue<U>::current = el;
				}
				else
				{
					Node<U>* tmp = place->next;
					place->next = el;
					el->prev = place;
					el->next = tmp;
					tmp->prev = el;
				}
			}
		}
	};

}
