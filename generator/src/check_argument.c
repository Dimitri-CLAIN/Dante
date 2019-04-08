/*
** EPITECH PROJECT, 2019
** check_arg
** File description:
** check given arguments
*/

#include "my.h"

int check_arg(char **av)
{
    if (isnum(av[0]) == TRUE || isnum(av[1]) == TRUE) {
        my_putstr_error("Error: expected width and height to be integers.\n");
        return (FALSE);
    }
    if (my_strcmp(av[2], "perfect") == FALSE &&
        my_strcmp(av[2], "imperfect") == FALSE) {
        my_putstr_error("Error: expected perfect/imperfect.\n");
        return (FALSE);
    }
    return (TRUE);
}