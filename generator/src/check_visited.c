/*
** EPITECH PROJECT, 2019
** check_visited
** File description:
** check visited cells
*/

#include "my.h"

int is_all_cells_visited_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '1')
            return (FALSE);
        i++;
    }
    return (TRUE);
}

int is_all_cells_visited(char **maze)
{
    int i = 0;

    while (maze[i] != NULL) {
        if (is_all_cells_visited_str(maze[i]) == FALSE)
            return (FALSE);
        i++;
    }
    return (TRUE);
}

int is_visited(char **maze, int x, int y)
{
    if ((x < 0 || x > my_strlen(maze[0]) - 1) ||
        (y < 0 || y > array_len(maze) - 1))
        return (TRUE);
    if (maze[y][x] == '2')
        return (TRUE);
    return (FALSE);
}

int is_neighbours_visited(char **maze, pos_t pos)
{
    if (is_visited(maze, pos.x - 2, pos.y) == TRUE &&
        is_visited(maze, pos.x + 2, pos.y) == TRUE &&
        is_visited(maze, pos.x, pos.y - 2) == TRUE &&
        is_visited(maze, pos.x, pos.y + 2) == TRUE)
        return (TRUE);
    return (FALSE);
}
