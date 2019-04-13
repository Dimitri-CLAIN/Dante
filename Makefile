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
					solver/src/free_annex.c			\
					generator/src/check_argument.c				\
					generator/src/init_maze.c					\
					generator/src/generate_maze.c				\
					generator/src/manage_stack.c				\
					generator/src/check_visited.c				\
					generator/src/get_random_nb.c				\
					generator/src/display_maze.c				\
					generator/src/make_maze_imperfect.c

SRC_TEST	=		solver/tests/tests_read_map.c	\
					solver/tests/tests_my_algo.c	\
					generator/tests/test_check_argument.c

OBJ		=		$(SRC:.c=.o) $(MAIN:.c=.o)

BIN		=		unit_tests

CC		=		gcc

CFLAGS		=		-I./include -I./solver/include -I./generator/include -g

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
					rm -rf *.gc*

fclean:				clean
					make -sC generator/ fclean
					make -sC solver/ fclean

re:					fclean all

.PHONY:	all clean fclean re tests_run