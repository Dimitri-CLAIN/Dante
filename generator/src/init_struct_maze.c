/*
** EPITECH PROJECT, 2019
** init_struct_maze
** File description:
** initialize the maze structure
*/

#include "my.h"

int is_perfect(char *str)
{
    if (my_strcmp(str, "perfect") == TRUE)
        return (PERFECT);
    else if (my_strcmp(str, "imperfect") == TRUE)
        return (NOT_PERFECT);
}

void init_struct_maze(char **av, maze_t *info)
{
    info->width = my_getnbr(av[0]);
    info->height = my_getnbr(av[1]);
    info->state = is_perfect(av[2]);
    info->maze = NULL;
}