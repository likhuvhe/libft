NAME	= libft.a

SRC	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_strlen.c test.c 

OBJ	= $(SRC:.c=.o)
CFLAGS	= -Wall -Wextra -Werror

$(NAME)	: $(OBJ)
	gcc $(CFLAGS) $(SRC) -c 
	ar rc $(NAME) $(OBJ) libft.h
	ranlib $(NAME)
all	: $(NAME)

clean	:
	rm -rf $(OBJ) $(NAME) a.out

fclean	: clean
	rm -rf $(NAME)

re	: fclean all
