NAME	= harlFilter
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	= main.cpp Harl.cpp
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

test: all
	./harlFilter DEBUG
	./harlFilter INFO
	./harlFilter WARNING
	./harlFilter ERROR
	./harlFilter OTHER

.PHONY: all clean fclean re