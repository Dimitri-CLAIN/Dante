##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile lib
##

SRC		=		my_putchar.c				\
				my_putstr.c				\
				my_putstr_error.c			\
				my_strcat.c				\
				my_strdup.c				\
				my_strcmp.c				\
				my_str_to_word_array.c			\
				my_strlen.c				\
				my_strcpy.c				\
				array_len.c				\
				free_array.c			\
				my_getnbr.c				\
				clean_str.c				\
				isnum.c					\
				my_str_to_all_array.c

OBJ		=		$(SRC:.c=.o)

NAME		=		libmy.a

all:				$(NAME)

$(NAME):			$(OBJ)
				ar rc $(NAME) $(OBJ)
				cp $(NAME) ../

clean:
				rm -f $(OBJ)

fclean:				clean
				rm -f $(NAME)
				rm -f ../$(NAME)

re:				fclean all
