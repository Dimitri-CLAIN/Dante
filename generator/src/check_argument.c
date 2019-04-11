/*
** EPITECH PROJECT, 2019
** check_arg
** File description:
** check given arguments
*/

#include "my.h"

int check_good_arg(char **av)
{
    if (getnbr(av[1]) <= 0 || getnbr(av[2]) <= 0) {
        my_putstr_error("Error: expected width and height to be \
strictly positive integer.\n");
        return (TRUE);
    }
    return (FALSE);
}

int check_arg(char **av)
{
    if (isnum(av[1]) == TRUE || isnum(av[2]) == TRUE) {
        my_putstr_error("Error: expected width and height to be integers.\n");
        return (FALSE);
    }
    if (check_good_arg(av) == TRUE)
        return (FALSE);
    if (av[3] != NULL && my_strcmp(av[3], "perfect") == FALSE) {
        my_putstr_error("Error: expected perfect or NULL.\n");
        return (FALSE);
    }
    return (TRUE);
}