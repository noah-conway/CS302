
//====== Constructors =========================================================

template <class T>
LinkedList<T>::LinkedList() :
m_head(NULL),
m_tail(NULL),
m_size(0)
{
std::cout << "Linked List default ctor" << std::endl;
} //end default constructor

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> & linkedlist)
/*
m_head(linkedlist.m_head),
m_tail(linkedlist.m_tail),
m_size(linkedlist.m_size),
*/
{
std::cout << "Linked List copy ctor" << std::endl;
}

template <class T>
LinkedList<T>::~LinkedList() 
{
	clear();
std::cout << "Linked List dtor" << std::endl;
} //end dtor

//====== Member Functions =====================================================
	
template <class T>
int LinkedList<T>::getSize() const
{
	return m_size;
} //end getSize

template <class T>
bool LinkedList<T>::isEmpty() const
{
	if (m_head == NULL && m_size == 0) {
		return true;
	} else {
		return false;
	} //end if/else
} //end isEmpty

template <class T>
bool LinkedList<T>::add(const T& data)
{

	Node<T> * ptrToAdd = new Node<T>;
	ptrToAdd->setData(data);
	ptrToAdd->setNext(m_head);

	if (isEmpty())  //if this is the first node in the linked list, assign the m_tail pointer to it
	{
		m_tail = ptrToAdd;
	} //end if

	m_head = ptrToAdd;
	m_size++;
	std::cout << "Linkedlist add success, size: " << m_size << std::endl;

	return true
} //end add

template <class T>
bool LinkedList<T>::remove(const Node<T>& node)
{
	Node<T> * ptrToDel = node;	
	if(!isEmpty() && ptrToDel != NULL) 
	{
	node->getData() = m_head->getData();
	
	m_size--;
	std::cout << "linedlist remove success, size: " << m_size << std::endl;
	return true;		
	} //end if
	else 
	{
		return false;
	} //end else
		
	
}

template <class T>
void LinkedList<T>::clear()
{
	while(!isEmpty())
	{
		Node<T> * tmpPtrDel = m_head;
		m_head = tmpPtrDel->getNext();
		delete tmpPtrDel;
		m_size--;
		std::cout << m_size << std::endl;
	} //end while
	std::cout << "linkedlist clear success, size: " << m_size << std::endl;
} //end clear

template <class T>
void LinkedList<T>::showAll() const
{ 
	Node<T> * tmpPtrShow = m_head;  
	while(tmpPtrShow != NULL)
	{
		std::cout << tmpPtrShow->getData() << std::endl;
		tmpPtrShow = tmpPtrShow->getNext();
		
	} //end while
	
} //end showAll
	


