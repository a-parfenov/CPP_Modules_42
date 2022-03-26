#include "PhoneBook.hpp"

Contact::Contact(void) {
	created = false;
}

Contact::~Contact(void) {}

void	Contact::fill_contact(void) {
	std::cout << "Input contact's first name       : ";
	std::cin >> first_name;
	std::cout << "Input contact's last name        : ";
	std::cin >> last_name;
	std::cout << "Input contact's nickname         : ";
	std::cin >> nickname;
	std::cout << "Input contact's phone number     : ";
	std::cin >> phone_number;
	std::cout << "Input contact's darkest secret   : ";
	std::cin >> darkest_secret;
	created = true;
}

bool Contact::getCreated(void) {
	return (this->created);
}

void	Contact::print_str(std::string str) {
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << "|";
	else
		std::cout << std::setw(10) << str << "|";
	return ;
}

void	Contact::print_contact(int i) {
	std::cout << "|         " << i + 1 << "|";
	print_str( first_name );
	print_str( last_name );
	print_str( nickname );
	std::cout << std::endl;
}

void	Contact::print_contact(void) {
	std::cout << "First Name      :" << this->first_name << std::endl;
	std::cout << "Last Name       :" << this->last_name << std::endl;
	std::cout << "Nickname        :" << this->nickname << std::endl;
	std::cout << "Phone number    :" << this->phone_number << std::endl;
	std::cout << "Darkest secret  :" << this->darkest_secret << std::endl;	
}
