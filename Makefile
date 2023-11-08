NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =	

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re 