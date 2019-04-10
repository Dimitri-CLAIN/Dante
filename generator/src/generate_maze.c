/*
** EPITECH PROJECT, 2019
** generate_maze
** File description:
** generate maze
*/

#include "my.h"

void generate_maze(char **maze)
{
    int i = 0;

    while (maze[i] != NULL) {
        my_putstr(maze[i++]);
        my_putchar('\n');
    }
}