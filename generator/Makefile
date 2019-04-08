##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Makefile
##

SRC		=			src/init_struct_maze.c			\
					src/check_argument.c			\
					src/generate_maze.c				\
					src/cells.c

MAIN		=		src/main.c

SRC_TEST	=

OBJ		=		$(SRC:.c=.o) $(MAIN:.c=.o)

NAME		=		generator

BIN		=		unit_tests

CC		=		gcc

CFLAGS		=		-I./include -g

LIB		=		-L../lib -lmy

LDFLAGS		=		-lcriterion --coverage

all:				$(NAME)

$(NAME):			$(OBJ)
				make -sC ../lib/my
				$(CC) -o $(NAME) $(OBJ) $(LIB)

tests_run:
				make -sC ../lib/my
		$(CC) -o $(BIN) $(SRC) $(SRC_TEST) $(CFLAGS) $(LIB) $(LDFLAGS)
				./$(BIN)

clean:
			make -sC ../lib/my clean
			rm -f $(OBJ)
			rm -f *.gc*

fclean:			clean
			make -sC ../lib/my fclean
			rm -f $(NAME)
			rm -f $(BIN)

re:			fclean all
