NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iheader

SRC =	printf/ft_hexadecimal.c \
		printf/ft_printf.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

lib :
	make -C libft/ 
	cp -rf libft/libft.a $(NAME)

$(NAME): lib $(OBJ)
	ar -rcs $@ $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re lib