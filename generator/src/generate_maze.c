/*
** EPITECH PROJECT, 2019
** generate_maze
** File description:
** generate the maze
*/

#include "my.h"

void is_wall_display(int i, int j, maze_t info)
{
    if (info.maze[i][j].wall == NOT_WALL)
        my_putchar('*');
    else if (info.maze[i][j].wall == WALL)
        my_putchar('X');
}

void display_maze(maze_t info)
{
    int i = 0;

    while (info.maze[i] != NULL) {
        for (int j = 0; info.maze[i][j].wall != END; j++)
            is_wall_display(i, j, info);
        if (info.maze[++i] != NULL)
            my_putchar('\n');
    }
}

void generate_maze(maze_t info)
{
    
}