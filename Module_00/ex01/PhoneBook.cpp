#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->thisContact = 0;
}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::add_contact(void) {
	contact[thisContact].fill_contact();
	thisContact++;
	if (thisContact == MAX)
		thisContact = 0;
	std::cout << std::endl;
}

void PhoneBook::printPhonebook(void) {
	int	i = -1;

	while (++i < MAX) {
		if (this->contact[i].getCreated() == false)
			break;
		if (i == 0)
		{
			std::cout << std::endl;
			std::cout << "|     index|first name| last name|  nickname|" << std::endl;
			// std::cout << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			// std::cout << std::endl;
		}
		this->contact[i].print_contact(i);
	}
	if (i == 0) {
		std::cout << "No contact in phonebook" << std::endl;
		return ;
	}
	else {
		std::cout << "---------------------------------------------" << std::endl;
		// std::cout << std::endl;
	}
	this->printPhonebookIndex(i);
}

void PhoneBook::printPhonebookIndex(const int iMax) {
	int input;	

	while (1)
	{	
		std::cout << "Input index ( 0 to exit ): ";
		std::cin >> input;
		std::cout << std::endl;

		if (std::cin.fail())
		{
			std::cout << "Wrong input: ( not int )" << std::endl;
			std::cin.clear();
			std::cin.ignore(32767,'\n');
		}
		else if (input > 0 && input <= iMax)
		{
			this->contact[input - 1].print_contact();
			std::cout << std::endl;
			break ;
		}
		else if (input == 0)
		{
			std::cout << std::endl;
			break ;
		}
		else
			std::cout << "Wrong index: ( no index )" << std::endl;
	}
}
