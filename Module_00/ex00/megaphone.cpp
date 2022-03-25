#include <iostream>
#include <string>

void print_str(char *str)
{
	while (*str)
	{
		std::cout << (char) toupper(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc)
		{
			print_str(argv[i]);
			if (i + 1 < argc)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
