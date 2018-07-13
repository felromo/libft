CC := gcc
FLAGS := -Wall -Wextra -Werror
NAME := libft.a
SRC := src
OBJ := obj
INCLUDE := -Iinclude
SOURCES := $(wildcard $(SRC)/*.c)
OBJECTS := $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SOURCES))

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	/bin/rm -f obj/*.o

fclean: clean
	/bin/rm -f $(NAME)