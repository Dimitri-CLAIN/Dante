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
    while (maze->all_maze[y + 1] != NULL) {
        for (x = 0; maze->all_maze[y][x].ch != '\0'; x++)
            printf("%c", maze->all_maze[y][x].ch);
        printf("\n");
        y++;
    }
    for (x = 0; maze->all_maze[y][x].ch != '\0'; x++)
            printf("%c", maze->all_maze[y][x].ch);
}