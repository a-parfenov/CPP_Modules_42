#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <string>
# include <iomanip>
# define MAX 8

# define RED		=	"\033[1;31m"
# define BLUE		=	"\033[1;34m"
# define YELLOW		=	"\033[1;33m"
# define WHITE		=	"\033[1;37m"
# define GREEN		=	"\033[1;32m"
# define PURPLE		=	"\033[1;35m"
# define GRAY		=	"\033[1;30m"
# define END		=	"\033[0m"

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string	darkest_secret;
	bool		created;

public:
	Contact();
	~Contact();
	void	fill_contact(void);
	bool	getCreated(void);
	void	print_contact(void);
	void	print_contact(int i);
	void	print_str( std::string str);
};

class PhoneBook
{
private:
	Contact	contact[MAX];
	int		thisContact;

public:
	PhoneBook();
	~PhoneBook();
	void	add_contact(void);
	void	printPhonebook(void);
	void	printPhonebookIndex(const int iMax);
};

#endif
