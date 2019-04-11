/*
** EPITECH PROJECT, 2019
** check_arg
** File description:
** check given arguments
*/

#include "my.h"

int check_good_arg(char **av)
{
    if (my_getnbr(av[0]) <= 0 || my_getnbr(av[1]) <= 0) {
        my_putstr_error("Error: expected width and height to be \
strictly positive integer.\n");
        return (TRUE);
    }
    return (FALSE);
}

int check_arg(char **av)
{
    if (isnum(av[0]) == TRUE || isnum(av[1]) == TRUE) {
        my_putstr_error("Error: expected width and height to be integers.\n");
        return (FALSE);
    }
    if (av[2] != NULL && my_strcmp(av[2], "perfect") == FALSE) {
        my_putstr_error("Error: expected perfect/NULL.\n");
        return (FALSE);
    }
    if (check_good_arg(av) == TRUE)
        return (FALSE);
    return (TRUE);
}