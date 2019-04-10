/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

void usage(void)
{
    my_putstr("USAGE\n\
./generator <width> <height> <perfect/imperfect>\n");
}

int main(int ac, char **av)
{
    char **maze = NULL;

    if (ac == 2 && my_strcmp(av[1], "-h") == TRUE) {
        usage();
        return (0);
    } else if (ac < 3 || ac > 4) {
        my_putstr_error("Try -h.\n");
        return (84);
    }
    if (check_arg(av + 1) != TRUE)
        return (84);
    maze = init_maze(my_getnbr(av[1]), my_getnbr(av[2]));
    generate_maze(maze);
    return (0);
}