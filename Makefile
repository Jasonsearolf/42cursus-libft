#Variables
CC=cc
CFLAGS= -Wall -Werror -Wextra
SRC=$(wildcard ft_*.c)
OBJ=$(SRC:.c=.o)
NAME=libft.a
AR= ar rcs

#REGLAS
all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(NAME) $(OBJ)
%o: %c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean