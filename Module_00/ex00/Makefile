NAME	=	megaphone

FILES	=	megaphone.cpp
OBJ_DIR	=	./obj/
OBJ		=	$(addprefix $(OBJ_DIR), $(FILES:.cpp=.o))
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

.PHONY	:	all clean fclean re test

all		:	$(NAME)

$(NAME)	:	obj $(OBJ)
			@$(CC) $(CFLAGS) $(OBJ) -o $@

obj		:
			@mkdir -p obj/

obj/%.o	:	%.cpp
			@$(CC) $(CFLAGS) -c $< -o $@
			@echo "\tCompiling...\t" [ $(NAME) ] $(SUCCESS)

clean	:
			@rm -rf obj/
			@echo "\tCleaning...\t" [ $(OBJ_DIR) ] $(OK)

fclean	:	clean
			@rm -f $(NAME)
			@echo "\tDeleting...\t" [ $(NAME) ] $(OK)

re		:	fclean all

test	: 	$(NAME)
			@/bin/echo "TEST=============================================================="
			@/bin/echo "Expected  : SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
			@/bin/echo -n "Megaphone : "
			@./$(NAME) "shhhhh... I think the students are asleep..."
			@/bin/echo
			@/bin/echo "Expected  : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
			@/bin/echo -n "Megaphone : "
			@./$(NAME) Damnit "!" "Sorry students, I thought this thing was off."
			@/bin/echo
			@/bin/echo "Expected  : * LOUD AND UNBEARABLE FEEDBACK NOISE *"
			@/bin/echo -n "Megaphone : "
			@./$(NAME)
			@/bin/echo "=================================================================="