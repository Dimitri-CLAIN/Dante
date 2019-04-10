/*
** EPITECH PROJECT, 2019
** init_maze
** File description:
** initialize maze
*/

#include "my.h"

char *put_line(char *str, int width)
{
    int i = 0;
    int state = 0;

    while (i != width) {
        str[i++] = (state == 1) ? '0' : '1';
        state = (state == 0) ? 1 : 0;
    }
    str[i] = '\0';
    return (str);
}

char *put_walls(char *str, int width)
{
    int i = 0;

    while (i != width)
        str[i++] = '0';
    str[i] = '\0';
    return (str);
}

char **init_maze(int width, int height)
{
    char **maze = malloc(sizeof(char *) * (height + 1));
    int i = 0;
    int state = 0;

    while (i != height) {
        maze[i] = malloc(sizeof(char) * (width + 1));
        if (state == 0) {
            maze[i] = put_line(maze[i], width);
            state = 1;
        } else {
            maze[i] = put_walls(maze[i], width);
            state = 0;
        }
        i++;
    }
    maze[i - 1][width - 1] = '1';
    if (width > 2)
        maze[i - 1][width - 2] = '1';
    maze[i] = NULL;
    return (maze);
}