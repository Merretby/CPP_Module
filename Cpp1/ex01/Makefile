NAME = zombieHorde
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror #-g -fsanitize=address -pedantic
CFILES =  main.cpp zombieHorde.cpp Zombie.cpp 
OFILES = $(CFILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
