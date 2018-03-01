##
## EPITECH PROJECT, 2017
## makefile for unit tests
## File description:
## make file for unit tests
##

SRC_DIR	=	$(realpath ..)

SRC	= 	$(SRC_DIR)/my_strtol.c	\
		$(SRC_DIR)/my_put_nbr.c	\
		$(SRC_DIR)/my_strdup.c	\
		$(SRC_DIR)/my_strlen.c


SRC_UT_DIR	= 	$(realpath .)

SRC_UT	=	$(SRC_UT_DIR)/test_my_functions.c	\
		$(SRC_UT_DIR)/tests_other_functions.c

OBJ	=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS	= -Wall -Wextra -I../include --coverage

LDFLAGS	= -lcriterion -lgcov

NAME	=	units

all:	$(NAME)

$(NAME):	$(OBJ)
	cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
