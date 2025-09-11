NAME	= Name
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJECT	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECT)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re