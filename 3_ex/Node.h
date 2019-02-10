#ifndef _NODE_H_
#define _NODE_H_

#include<iostream>
#include<string>

template<class T>
class Node {
public:///////////////////////////////////////////////////////////////////////////////////////////////////////

//====== Constructors =========================================================

	Node();
	Node (const T &data);
	Node (const T &data, Node<T>* next);

//====== Member Functions =====================================================

	void setData(const T &data);
	void setNext(Node<T>* next);
	T getData() const;
	Node<T>* getNext() const;

private://////////////////////////////////////////////////////////////////////////////////////////////////////

	T m_data;
	Node<T> *m_next;

};

#include "Node.cpp"
#endif ///NODE_H
