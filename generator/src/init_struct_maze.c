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

index_t **get_empty_maze(int width, int height)
{
    index_t **tmp = malloc(sizeof(index_t *) * (height + 1));
    int x = 0;
    int y = 0;

    while (y != height) {
        tmp[y] = malloc(sizeof(index_t) * (width + 1));
        for (x = 0; x != width; x++)
            tmp[y][x] = create_a_cell(x, y);
        tmp[y++][x] = end_cell();
    }
    tmp[y] = NULL;
    return (tmp);
}

void init_struct_maze(char **av, maze_t *info)
{
    info->width = my_getnbr(av[0]);
    info->height = my_getnbr(av[1]);
    info->state = is_perfect(av[2]);
    info->maze = get_empty_maze(info->width, info->height);
}