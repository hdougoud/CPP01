NAME	= sed
CC		= g++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS	= main.cpp open_files.cpp replace.cpp
OBJECT	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECT)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -f test.txt test.txt.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all
	rm -f test.txt
	rm -f test.txt.replace
	echo "Hello World\ntest 123\n123\nabc123\n\
	\n\n123123123\n123 123 123\nREPLACED 123\n\
	aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa123\n\
	123aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa123aaaaaaaaaaaaaaaaaaaaaaaaaaaa\n\
	12 1234 1 124 132" >> test.txt
	./sed test.txt 123 REPLACED

.PHONY: all clean fclean re test