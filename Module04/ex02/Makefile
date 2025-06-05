SRC = src/animal.cpp \
	  src/cat.cpp \
	  src/dog.cpp \
	  src/WrongAnimal.cpp \
	  src/WrongCat.cpp \
	  src/Brain.cpp \
	  src/main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = abstract
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re