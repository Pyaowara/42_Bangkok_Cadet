NAME = libft.a
INC = libft.h
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c
SRCS += ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strdup.c
SRCS += ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_toupper.c 
SRCS += ft_tolower.c ft_memmove.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c
SRCS += ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SRCS = $(SRCS) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c
BONUS_SRCS += ft_lstclear.c ft_lstiter.c ft_lstmap.c
CC = gcc
FLAG = -Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(BONUS_SRCS:.c=.o)
$(NAME): $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ)
%.o: %.c $(INC)
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: all
	ar rcs $(NAME) $(OBJ_BONUS)

.PHONY: bonus all clean fclean re