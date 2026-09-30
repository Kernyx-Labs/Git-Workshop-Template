NAME	=	reverse

SRC	=	src/main.c	\
		src/my_putstr.c	\
		src/my_strlen.c	\
		src/my_revstr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -I include

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
