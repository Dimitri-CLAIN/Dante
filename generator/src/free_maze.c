/*
** EPITECH PROJECT, 2019
** free_maze
** File description:
** free maze
*/

#include "my.h"

void free_maze(index_t **maze)
{
    int i = 0;

    while (maze[i] != NULL) {
        free(maze[i]);
        i++;
    }
    free(maze);
}