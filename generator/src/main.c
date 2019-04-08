/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    maze_t info;

    if (ac != 4) {
        my_putstr_error("Try -h.\n");
        return (84);
    }
    if (check_arg(av + 1) != TRUE)
        return (84);
    init_struct_maze(av + 1, &info);
    return (0);
}