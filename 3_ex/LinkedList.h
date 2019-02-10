#ifndef _LINkEDLIST_H_
#define _LINKEDLIST_H_

#include"Node.h"

template<class T>
class LinkedList {
public:///////////////////////////////////////////////////////////////////////////////////////////////////////

//====== Constructors =========================================================

	LinkedList();
	LinkedList(const LinkedList<T> & linkedlist); 
	~LinkedList();

//====== Member Functions =====================================================
	
	int getSize() const;
	bool isEmpty() const;
	bool add(const T& data);
	bool remove(const Node<T> & node);
	void clear();
//	bool find(const T & data);
	void showAll() const;

private://////////////////////////////////////////////////////////////////////////////////////////////////////

	Node<T> * m_head;
	Node<T> * m_tail;
	int m_size;

};

#include "LinkedList.cpp"
#endif ///_LINKEDLIST_H
