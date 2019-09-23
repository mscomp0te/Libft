NAME = libft.a

SRC = ./*.c

OBJ = $(SRC:%.c=%.o)

.PHONY = all clean fclean re

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC) -I .
		ar qc $(NAME) $(OBJ)
		ranlib $(NAME)
		%.c:%.o	

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all
