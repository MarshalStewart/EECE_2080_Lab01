// LinkedList.cpp : Defines the exported functions for the DLL application.
//

#include "LinkedList.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>

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
		delete m_next;
	m_next = nullptr;
}

PointerBasedLinkedList::PointerBasedLinkedList() : ILinkedList(), m_head(nullptr)
{
}

/** Returns true  if list is empty, otherwise false */
bool PointerBasedLinkedList::isEmpty() const
{
	// TODO (DONE)
	return (m_head == nullptr);
}

/** Adds a value to the LinkedList.  Return true if able to, otherwise false */
bool PointerBasedLinkedList::add(int val)
{
	// TODO (DONE)
	if (m_count > 10)
	{
		return false;
	}

	Node *curPtr = m_head;
	Node *tmp = new Node(val, nullptr);

	if (isEmpty())
		m_head = tmp;
	else
	{
		Node *nxtPtr = curPtr->getNext();
		while (nxtPtr != nullptr)
		{
			curPtr = nxtPtr;
			nxtPtr = nxtPtr->getNext();
		}

		curPtr->setNext(tmp);
	}

	m_count++;

	return true;
}

/** Remove a value to the LinkedList.  Return true if able to, otherwise false.
Will only remove one entry if there are multiple entries with the same value */
bool PointerBasedLinkedList::remove(int val)
{
	// TODO (DONE)
	bool canRemove = !isEmpty();
	bool foundItem = false;
	Node *curPtr = m_head;
	Node *prePtr = nullptr;
	Node *nxtPtr = nullptr;

	while (curPtr != nullptr && canRemove)
	{
		if (curPtr->getItem() == val)
		{
			foundItem = true;
			nxtPtr = curPtr->getNext();
			if (prePtr == nullptr)
				m_head = nxtPtr;
			else
				prePtr->setNext(nxtPtr);

			curPtr->setNext(nullptr);
			delete curPtr;
			m_count--;
		}
		prePtr = curPtr;
		curPtr = curPtr->getNext();
	}
	return (canRemove && foundItem);
}

/** Remove all elements from LinkedList */
void PointerBasedLinkedList::clear()
{
	// TODO (DONE)
	Node *curPtr = m_head;
	Node *prvPtr = nullptr;

	while (curPtr != nullptr)
	{
		while(curPtr->getNext() != nullptr)
		{
			prvPtr = curPtr;
			curPtr = curPtr->getNext();
		}	

		if (curPtr == m_head)
		{
			m_head->setNext(nullptr);
			delete m_head;
			m_head = nullptr;
		}
		else
		{
			curPtr->setNext(nullptr);
			delete curPtr;

			prvPtr->setNext(nullptr);
		}

		curPtr = m_head;
	}
}

PointerBasedLinkedList::~PointerBasedLinkedList()
{
	// TODO (DONE)
	clear();
}

std::string PointerBasedLinkedList::toString() const
{
	// TODO (DONE)
	string str = "";

	if (isEmpty())
	{
		return str;
	}

	Node *curPtr = m_head;

	while (curPtr != nullptr)
	{
		str += std::to_string(curPtr->getItem());
		curPtr = curPtr->getNext();
		if (curPtr != nullptr)
			str += " ";
	}

	std::cout << str << std::endl;
	return str;
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
			m_values[i] = val;
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
			m_count--;
		}
		if (removed)
		{
			m_values[i] = (i == 9) ? -1 : m_values[i+1];
		}
	}

	return removed;
}
void ArrayBasedLinkedList::clear()
{
	// TODO (DONE)
	for (int i: m_values)
		i = -1;

	m_count = 0;
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
		if(m_values[i] >= 0)
			str += std::to_string(m_values[i]);

		if (i < 10 && m_values[i] >= 0)
		{
			str += " ";
		}
	}

	return str.substr(0, str.length()-1);
}
