NAME 		= ZombieTsunami.apk

SRC 		= main.cpp			\
			  Zombie.cpp		\
			  zombieHorde.cpp	\

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRC)
				c++ $(CPPFLAGS) -o $(NAME) $(SRC)
clean:
				rm -f $(NAME)
fclean:		clean

re:			fclean all

.PHONY: all clean fclean re
