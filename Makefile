NAME	= libft.a

SRC	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcat.c\
	  ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isascii.c ft_strncat.c ft_strlcat.c\
	  ft_memcmp.c ft_strcmp.c test.c

OBJ	= $(SRC:.c=.o)
CFLAGS	= -Wall -Wextra -Werror

$(NAME)	: $(OBJ)
	@gcc $(CFLAGS) $(SRC) -c 
	@ar rc $(NAME) $(OBJ) libft.h
	@ranlib $(NAME)
all	: $(NAME)

clean	:
	@rm -rf $(OBJ) a.out

fclean	: clean
	@rm -rf $(NAME)

re	: fclean all
