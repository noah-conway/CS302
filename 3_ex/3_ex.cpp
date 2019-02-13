#include "LinkedList.h"
#include <string>

void printMenu()
{
	std::cout << "=======Linked List Menu=======" << std::endl;
	std::cout << "      1: Add a new item" << std::endl;
	std::cout << "      2: Remove an item" << std::endl;
	std::cout << "      3: Show the number of items" << std::endl;
	std::cout << "      4: Show all items" << std::endl;
	std::cout << "      5: Exit the Program" << std::endl;

}

int main () 
{

	LinkedList<int> sampleList;

	int option;	
	printMenu();

	while (true) {
	std::cout << "Enter an option: ";
	std::cin  >> option;

		switch(option) 
		{
			case 1: //////////////////////////////////////////////////////////////////////////////////

				int data;
				std::cout << "Enter an int: ";
				std::cin >> data;

				if (sampleList.add(data)) 
				{
					std::cout << "Data member " << data << " sucessfully added" << std::endl;
				}
			
			break; ///////////////////////////////////////////////////////////////////////////////////
			case 2: //////////////////////////////////////////////////////////////////////////////////

				int toDel;
				std::cout << "Enter an int to remove: ";
				std::cin >> toDel;
				
				if (sampleList.remove(toDel)) 
				{
					std::cout << "Data member " << toDel << " sucessfully deleted" << std::endl;
				}

			break; ///////////////////////////////////////////////////////////////////////////////////
			case 3: //////////////////////////////////////////////////////////////////////////////////

				std::cout << "Size: " << sampleList.getSize() << std::endl;

			break; ///////////////////////////////////////////////////////////////////////////////////
			case 4: //////////////////////////////////////////////////////////////////////////////////

				sampleList.showAll();

			break; ///////////////////////////////////////////////////////////////////////////////////
			case 5: //////////////////////////////////////////////////////////////////////////////////

				return 0;

			default: /////////////////////////////////////////////////////////////////////////////////

				std::cout << "Invalid Option" << std::endl;	
				printMenu();

		} //end switch(option)

	} //end while(true)

} //end main
