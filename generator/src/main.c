/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"
#include <time.h>

void usage(void)
{
    my_putstr("USAGE\n\
./generator <width> <height> <perfect/imperfect>\n");
}

void wich_generator(char **av)
{
    char **maze = NULL;

    maze = init_maze(getnbr(av[1]), getnbr(av[2]));
    srand(time(NULL));
    if (av[3] != NULL)
        maze = generate_maze(maze);
    else
        maze = generate_maze(maze);
    display_maze(maze);
    free_array(maze);
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == TRUE) {
        usage();
        return (0);
    } else if (ac < 3 || ac > 4) {
        my_putstr_error("Try -h.\n");
        return (0);
    }
    if (check_arg(av) != TRUE)
        return (84);
    wich_generator(av);
    return (0);
}