NAME	= libft.a

SRC	= ft_memset.c ft_bzero.c 

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