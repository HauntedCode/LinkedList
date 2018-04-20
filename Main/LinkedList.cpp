// Author: Nicholas Juk
// Filename: LinkedList.cpp

#include "LinkedList.h"

// default constructor: sets up empty list and sets head pointer to null
template <typename T>
inline LinkedList<T>::LinkedList()
{
	head = NULL;
	size = 0;
}

// overloaded constructor that sets up a linked list with and initializer list
template <typename T>
LinkedList<T>::LinkedList(std::initializer_list<T> data)
{
	for (const auto& ptr : data)
	{
		PushBack(ptr);
	}
}

template <typename T>
LinkedList<T>::~LinkedList()
{
	Clear();
}

// function to place a new nodeat the end of a linked list
template <typename T>
void LinkedList<T>::PushBack(T data)
{
	// check if head pointer is null, if so place node at head, if not place on back of list
	if (head == NULL)
	{
		// create new node at head and set data and next of head
		head = new Node<T>;
		head->data = data;
		head->next = NULL;
	}
	else
	{
		// create temporary pointer that points to the first node
		Node<T> * temp = head;

		// traverse down the linked list
		while (temp != NULL)
		{
			temp = temp->next;
		}

		// create new node at next pointer of last node and set its data and next pointer
		temp = new Node<T>;
		temp->data = data;
		temp->next = NULL;
	}

	// increment size
	size++;
}

// function that places a new node at the front of a list
template <typename T>
void LinkedList<T>::PushFront(T data)
{
	// check if head pointer is null, if so place node at head, if not place on front of list
	if (head == NULL)
	{
		// create new node at head, and set its data and next pointer
		head = new Node<T>;
		head->data = data;
		head->next = NULL;
	}
	else
	{
		// create temporary pointer and have it point to the first node
		Node<T> * temp = head;

		// create new node at the head and set its data and set its next pointer to the temporary pointer
		head = new Node<T>;
		head->data = data;
		head->next = temp;
	}

	// increment size
	size++;
}

// function that deletes the last node on a list
template <typename T> 
void LinkedList<T>::PopBack()
{
	// if list is empty we cannot pop anything so just exit
	if (head == NULL)
	{
		return;
	}

	// otherwise create temporary pointer that points to the head
	Node<T> * temp = head;

	// traverse down list ending at the second to last Node.
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	// delete the last node
	delete temp;
	temp = NULL;

	// decrement size
	size--;
}

// function that deletes the first node in a linked list
template <typename T>
void LinkedList<T>::PopFront()
{
	// if list is empty, we cannot pop anything so just exit
	if (head == NULL)
	{
		return;
	}

	// otherwise create temporary pointer that points to the first node
	Node<T> * temp = head;

	// delete first node
	head = head->next;
	delete temp;

	// decrement size
	size--;
}

// fuction that delets all of the contents of the linked list
template <typename T>
void LinkedList<T>::Clear()
{
	// while head is not null, delete the first item in the list
	while (head != NULL)
	{
		PopFront();
	}
}

template <typename T>
void LinkedList<T>::Erase(int location)
{
	// if location is out of bounds throw an exception otherwise go ahead and erase node
	if (location >= size)
	{
		throw "Linked list index is out of bounds";
		return;
	}
	else
	{

	}
}
