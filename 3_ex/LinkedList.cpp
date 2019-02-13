
//====== Constructors =========================================================

template <class T>
LinkedList<T>::LinkedList() :
m_head(NULL),
m_tail(NULL),
m_size(0)
{

} //end default constructor

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> & linkedlist)
/*
m_head(linkedlist.m_head),
m_tail(linkedlist.m_tail),
m_size(linkedlist.m_size),
*/
{

}

template <class T>
LinkedList<T>::~LinkedList() 
{
	clear();
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

	return true;
} //end add

template <class T>
bool LinkedList<T>::remove(const T& data)
{


	Node<T> * ptrToDel;		
	for(ptrToDel = m_head; ptrToDel != NULL; ptrToDel = ptrToDel->getNext())
	{
		if(ptrToDel->getData() == data)
		{
			//assign m_head data to Node
			ptrToDel->setData(m_head->getData());
			//delete m_head by assign ptrToDel to it, assigning ptrToDel to m_head->m_next, and deleting ptrToDel.
			ptrToDel = m_head;
			m_head = m_head->getNext();
			delete ptrToDel;
			
			m_size--;

			return true;
		} //end if
		
			
	} //end for 
	
	if (isEmpty())
	{
		std::cout << "Linked list is empty, no members to delete" << std::endl;
	} //end else if
	else
	{
		std::cout << data << " not found in list" << std::endl;
	}
	return false;
	
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
	} //end while
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
	


