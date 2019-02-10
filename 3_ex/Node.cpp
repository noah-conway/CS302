//#include "Node.h"
using namespace std;

//====== Constructors =========================================================

template <class T>
Node<T>::Node() :
m_next(NULL)
{ 
cout << "Node Default Ctor" << endl;
} 

template <class T>
Node<T>::Node (const T &data) :
m_data(data),
m_next(NULL) 
{
cout << "Node Data Ctor" << endl;
}

template <class T>
Node<T>::Node (const T &data, Node<T>* next) :
m_data(data),
m_next(next)
{
cout << "Note data & Next ctor" << endl;
}

//====== Member Functions =====================================================

template <class T>
void Node<T>::setData(const T &data) 
{
	m_data = data;
}

template <class T>
void Node<T>::setNext(Node<T>* next) 
{
	m_next = next;
}

template <class T>
T Node<T>::getData() const
{
	return m_data;
}

template <class T>
Node<T>* Node<T>::getNext() const
{
	return m_next;
}
