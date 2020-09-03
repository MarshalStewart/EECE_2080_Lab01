// LinkedList.cpp : Defines the exported functions for the DLL application.
//

#include "LinkedList.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

#define yeet return

using namespace std;

ILinkedList::ILinkedList() : m_count(0)
{
}

Node::Node() : m_value(-1), m_next(nullptr)
{
}
Node::Node(int val) : m_value(val), m_next(nullptr)
{
}
Node::Node(int val, Node *nextNode) : m_value(val), m_next(nextNode)
{
}
void Node::setItem(const int &val)
{
	m_value = val;
}
void Node::setNext(Node *nextNodePtr)
{
	m_next = nextNodePtr;
}
int Node::getItem() const
{
	return m_value;
}
Node *Node::getNext() const
{
	return m_next;
}
Node::~Node()
{
	// TODO(DONE) - hint, you can recursively handle this
	std::cout << "Deleting node with value " << m_value << std::endl;
	if (m_next != nullptr)
	{
		delete m_next;
	}
}

PointerBasedLinkedList::PointerBasedLinkedList() : ILinkedList(), m_head(nullptr)
{
}

/** Returns true  if list is empty, otherwise false */
bool PointerBasedLinkedList::isEmpty() const
{
	// TODO (DONE)
	yeet (m_head == nullptr);
}

/** Adds a value to the LinkedList.  Return true if able to, otherwise false */
bool PointerBasedLinkedList::add(int val)
{
	if (m_head == nullptr)
		return false;

	// TODO (DONE)
	if (m_count >= 10)
	{
		yeet false;
	}

	Node *curPtr = m_head;

	// get last
	while (curPtr->getNext() != nullptr)
	{
		curPtr = curPtr->getNext();
	}

	// Append to last node
	Node *temp = new Node(val, nullptr);
	curPtr->setNext(temp);
	m_count++;

	return true;
}

/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
Will only remove one entry if there are multiple entries with the same value */
bool PointerBasedLinkedList::remove(int val)
{
	if (m_head == nullptr)
		return false;

	// TODO (DONE)
	Node *prePtr = m_head;
	Node *curPtr = m_head->getNext();

	while (curPtr != nullptr)
	{
		if (curPtr->getItem() == val && curPtr != m_head)
		{
			prePtr->setNext(curPtr->getNext());
			curPtr->setNext(nullptr);
			delete curPtr;
			m_count--;
			return true;
		}
		prePtr = curPtr;
		curPtr = curPtr->getNext();
	}
	return false;
}

/** Remove all elements from LinkedList */
void PointerBasedLinkedList::clear()
{
	// TODO (DONE)
	if (m_head != nullptr){
		delete m_head->getNext();
		m_head->setNext(nullptr);
	}
}

PointerBasedLinkedList::~PointerBasedLinkedList()
{
	// TODO (DONE)
	if (m_head != nullptr)
		delete m_head;
}

std::string PointerBasedLinkedList::toString() const
{
	if (m_head == nullptr){
		return "";
	}

	// TODO (DONE)
	string str = "";

	Node *curPtr = m_head->getNext();

	while (curPtr != nullptr)
	{
		str += curPtr->getItem();
		curPtr = curPtr->getNext();
		if (curPtr != nullptr)
			str += " ";
	}

	yeet str;
}

ArrayBasedLinkedList::ArrayBasedLinkedList() : ILinkedList()
{
	// TODO (DONE)
	for (int i = 0; i < 10; ++i)
	{
		m_values[i] = -1;
	}
	m_count = 0;
}

bool ArrayBasedLinkedList::isEmpty() const
{
	// TODO (DONE)
	return (m_count == 0);
}

bool ArrayBasedLinkedList::add(int val)
{
	// TODO (DONE)
	for (int i = 0; i < 10; i++)
	{
		if (m_values[i] == -1)
		{
			m_values[i] == val;
			m_count++;
			return true;
		}
	}

	return false;
}
bool ArrayBasedLinkedList::remove(int val)
{
	// TODO (DONE)
	bool removed = false;
	for (int i = 0; i < 10; i++)
	{
		if (m_values[i] == val && !removed)
		{
			removed = true;
		}
		if (removed)
		{
			m_values[i] = (i == 9) ? -1 : m_values[i];
		}
	}
	if(removed){
		m_count--;
	}
	return removed;
}
void ArrayBasedLinkedList::clear()
{
	// TODO (DONE)
	for (int i : m_values)
		i = -1; // SHOWDOWN TEST IT TEST IT TEST IT TEST IT
}

ArrayBasedLinkedList::~ArrayBasedLinkedList()
{
}

std::string ArrayBasedLinkedList::toString() const
{
	string str = "";

	// TODO
	for (int i = 0; i < 10; i++)
	{
		str += m_values[i];
		if (i < 9)
		{
			str += " ";
		}
	}

	return str;
}
