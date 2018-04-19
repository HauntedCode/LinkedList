// Author: Nicholas Juk
// Filename: LinkedList.h
// Description: templated class definition for a simple/light weight linked list

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <initializer_list>

// node object that contains data and a pointer to the next node
template <typename T>
struct Node
{
	T data;
	Node * next;
};

// class defition of the linked list 
template <typename T> 
class LinkedList
{
public:

	// default constructor: creates empty linked list and sets head pointer to null
	LinkedList();

	// overloaded constructor: initializes linked list with data specified by user
	LinkedList(std::initializer_list<T> data);

	// deconstructor: deletes entire linked list from memory
	~LinkedList();

	// adds a new node to the end of the list
	void PushBack(T data);

	// adds a new node to the front of the list
	void PushFront(T data);

	// removes node at the end of the list
	void PopBack();

	// removes node at the front of the list
	void PopFront();

	// clears entire linked list from memory
	void Clear();

	// erases node at specified location
	void Erase(int location);

	// returns data at specified location (indexes start at 0)
	T GetAt(int location);

	// sets data at specified location (indexes start at 0)
	void SetAt(int location);

	// returns the size of the linked list
	int Size();

	// overload [] operator to do indexing
	T& operator[] (int location);

	// assigns linked list object to another linked list object 
	LinkedList<T>& operator= (LinkedList<T>& list);

	// sets up linked list based on array assigned to it by the user
	LinkedList<T>& operator= (std::initializer_list<T> data);

private:

	// pointer to the head
	Node * head;
};

#endif // LINKED_LIST_H