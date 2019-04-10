/*
** EPITECH PROJECT, 2019
** display_maze
** File description:
** display maze
*/

#include "my.h"

void display_maze_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '0')
            my_putchar('X');
        else
            my_putchar('*');
        i++;
    }
}

void display_maze(char **maze)
{
    int i = 0;

    while (maze[i] != NULL) {
        display_maze_str(maze[i]);
        my_putchar('\n');
        i++;
    }
}