##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Makefile
##

SRC		=			solver/src/prepare_my_maze.c	\
					solver/src/check_map.c			\
					solver/src/check_correct_end.c	\
					solver/src/print_my_maze.c		\
					solver/src/manage_solver.c		\
					solver/src/my_algo.c			\
					solver/src/free_annex.c

SRC_TEST	=		solver/tests/tests_read_map.c	\
					solver/tests/tests_my_algo.c

OBJ		=		$(SRC:.c=.o) $(MAIN:.c=.o)

BIN		=		unit_tests

CC		=		gcc

CFLAGS		=		-I./include -g -Isolver/include

LIB		=		-L./lib -lmy

LDFLAGS		=		-lcriterion --coverage

NAME		=		dante

all:				$(NAME)

$(NAME):
					make -sC generator/
					make -sC solver/

tests_run:
				make -sC ./lib/my
		$(CC) -o $(BIN) $(SRC) $(SRC_TEST) $(CFLAGS) $(LIB) $(LDFLAGS)
				./$(BIN)

clean:
					make -sC generator/ clean
					make -sC solver/ clean

fclean:				clean
					make -sC generator/ fclean
					make -sC solver/ fclean

re:					fclean all
