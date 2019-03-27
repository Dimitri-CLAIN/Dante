##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Makefile
##

NAME		=		dante

all:				$(NAME)

$(NAME):			
					make -sC generator/
					make -sC solver/

clean:
					make -sC generator/ clean
					make -sC solver/ clean

fclean:				clean
					make -sC generator/ fclean
					make -sC solver/ fclean

re:					fclean all
