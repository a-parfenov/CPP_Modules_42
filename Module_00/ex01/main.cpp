#include "PhoneBook.hpp"

int main(void)
{
	std::string command;
	std::string input;
	PhoneBook phonebook;

	std::cout << "\033[1;32mHello! Welcome to PhoneBook\033[0m" << std::endl;
	std::cout << "Commands are available: \033[1;34mADD / SEARCH / EXIT\033[0m" << std::endl << std::endl;
	while (1)
	{
		std::cout << "Input your command: ";
		std::cin >> input;

		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.printPhonebook();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Wrong input. Please enter: \033[1;33mEXIT / ADD / SEARCH\033[0m" << std::endl;
	}
	return (0);
}
