NAME = 
CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror #-g -fsanitize=address
CFILES = 
OFILES = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
