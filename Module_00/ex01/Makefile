NAME	=	phonebook

SRC	=		main.cpp \
			PhoneBook.cpp \
			Contact.cpp
HEADER	=	PhoneBook.hpp
OBJ_DIR	=	./obj/
OBJ		=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))
CC		=	clang++ -std=c++98
CFLAGS	=	-Wall -Wextra -Werror

#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

#COLORS
C_NO	=	"\033[00m"
C_OK	=	"\033[32m"
C_GOOD	=	"\033[32m"

#DEBUG
SUCCESS	=	$(C_GOOD)SUCCESS$(C_NO)
OK		=	$(C_OK)OK$(C_NO)

#:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	obj $(OBJ)
			@$(CC) $(CFLAGS) $(OBJ) -o $@

obj		:
			@mkdir -p obj/

obj/%.o	:	%.cpp ${HEADER}
			@$(CC) $(CFLAGS) -c $< -o $@
			@echo "\tCompiling...\t" [ $(NAME) ] $(SUCCESS)

clean	:
			@rm -rf obj/
			@echo "\tCleaning...\t" [ $(OBJ_DIR) ] $(OK)

fclean	:	clean
			@rm -f $(NAME)
			@rm -f $(OBJ_DIR) $(OBJ)
			@echo "\tDeleting...\t" [ $(NAME) ] $(OK)

re		:	fclean all