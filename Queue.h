/*
 * Queue.h
 *
 *  Created on: January 30, 2019
 *      Author: Xiaohang
 */

#ifndef QUEUE_H_
#define QUEUE_H_


#include "list.h"
#include <cstdlib>

template< class QUEUETYPE >
class Queue : private List<QUEUETYPE>
{
public:

	int size() const
	{
		return List<QUEUETYPE>::getLength();
	}
	void enqueue(const QUEUETYPE &data)
	{
		cout << "size:" << this->size() << endl;
		List<QUEUETYPE>::insert(data, this->size());
		/*if(this->size() == 0) {
			List<QUEUETYPE>::insert(data, 0);
		}
		else if(this->size() == 1) {
			List<QUEUETYPE>::insert(data, 1);
		}
		else {
			List<QUEUETYPE>::insert(data, this->size() - 1);
		}*/

	}


	bool dequeue(QUEUETYPE &data)
	{
		return List<QUEUETYPE>::remove(data, 0);
	}

	QUEUETYPE front()  {
		QUEUETYPE data = QUEUETYPE();
		if(size() == 0) {
			cout << "Queue is empty!!" << endl;
			return data;
		}
		Node< QUEUETYPE >* ptr = List<QUEUETYPE>::getEntry(0);
		return ptr->getItem();
	}

	QUEUETYPE rear()  {
		QUEUETYPE data = QUEUETYPE();
		if(size() == 0) {
			cout << "Queue is empty!!" << endl;
			return data;
		}
		Node< QUEUETYPE >* ptr = List<QUEUETYPE>::getEntry(this->size() - 1);
		return ptr->getItem();

	}

	bool isQueueEmpty() const
	{
		return this->isEmpty();
	}


	void printQueue() const
	{
		this->print();
	}
};


#endif//#pragma once /* QUEUE_H_ */
