// Author: Nicholas Juk
// Filename: LinkedList.cpp

#include "LinkedList.h"

// default constructor: sets up empty list and sets head pointer to null
template <typename T>
LinkedList<T>::LinkedList()
{
	this->head = NULL;
	return;
}

// overloaded constructor that sets up a linked list with and initializer list
template <typename T>
LinkedList<T>::LinkedList(std::initializer_list<T> data)
{
	for (const auto& ptr : data)
	{
		this->PushBack(ptr);
	}
	return;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
	this->Clear();
	return;
}