SRC = src/main.cpp \
src/fixed.cpp \
src/aritmethic.cpp \
src/comparison.cpp \
src/increment.cpp \
src/minmax.cpp
OBJ = $(SRC:.cpp=.o)
NAME = fixed
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