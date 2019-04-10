/*
** EPITECH PROJECT, 2019
** my_algo
** File description:
** my_algo
*/

#include "my.h"

int check_correct_access(room_t **all_maze, int x, int y)
{
    if (all_maze[y][x].ch == 'X' || all_maze[y][x].state == WRONG
        || all_maze[y][x].state == SEMI)
        return (FALSE);
    return (TRUE);
}

int my_algo(maze_t *maze, int x, int y)
{
    if ( x < 0 || y < 0 || maze->all_maze[y] == NULL
        || maze->all_maze[y][x].ch == '\0')
        return (FALSE);
    if (maze->all_maze[y][x].type == END)
        return (END);
    else if (check_correct_access(maze->all_maze, x, y) == FALSE)
        return (FALSE);
    else
        maze->all_maze[y][x].state = SEMI;
    if (my_algo(maze, x + 1, y) != FALSE || my_algo(maze, x, y + 1) != FALSE ||
        my_algo(maze, x - 1, y) != FALSE || my_algo(maze, x, y - 1) != FALSE) {
        maze->all_maze[y][x].ch = 'o';
        return (TRUE);
    }
    return (FALSE);
}
/*Faire une liste chainé des check point ->coord x, y*/