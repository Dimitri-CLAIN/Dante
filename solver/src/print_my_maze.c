/*
** EPITECH PROJECT, 2019
** print_my_maze
** File description:
** print_my_maze
*/

#include "my.h"

void print_my_maze(maze_t *maze)
{
    int x = 0;
    int y = 0;

    if (maze == NULL)
        return;
    while (maze->all_maze[y] != NULL) {
        for (x = 0; maze->all_maze[y][x].ch != '\0'; x++)
            my_putchar(maze->all_maze[y][x].ch);
        my_putchar('\n');
        y++;
    }
}