NAME = libftprintf.a
INC = ft_printf.h
SRCS = ft_printf.c ft_printf_utils.c libft.c
CC = gcc
FLAG = -Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)
$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) $(OBJ) *.out

re: fclean all