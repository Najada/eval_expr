##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_strtol.c	\
		main.c	\
		my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

CFLAGS	=	-I./include -W -Wall

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm *~ -f $(NAME)

re:		fclean all
