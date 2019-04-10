/*
** EPITECH PROJECT, 2019
** algo
** File description:
** algotithm
*/

#include "my.h"

int all_visited(index_t **maze)
{
    int i = 0;
    int j = 0;

    while (maze[i] != NULL) {
        for (j = 0; maze[i][j].wall != END; j++)
            if (maze[i][j].state == NOT_VISITED)
                return (FALSE);
        i++;
    }
    return (TRUE);
}

int choose_neighbour(index_t maze)
{
    int max = 3;
    int min = 0;
    int ret = (rand() % (max + 1 - min)) + min;

    return (ret);
}

int up_and_down(int x, int way)
{
    if (way == NORTH)
        x -= 1;
    else if (way == SOUTH)
        x += 1;
    return (x);
}

int left_and_right(int y, int way)
{
    if (way == WEST)
        y -= 1;
    else if (way == EST)
        y += 1;
    return (y);
}

void algo(maze_t *info)
{
    static int x = 0;
    static int y = 0;
    int tmp_x = 0;
    int tmp_y = 0;
    int way = -1;

    info->maze[y][x].state = VISITED;
    info->maze[y][x].wall = NOT_WALL;
    while (1) {
        way = choose_neighbour(info->maze[y][x]);
        if (way == NORTH || way == SOUTH)
            tmp_x = up_and_down(x, way);
        else if (way == WEST || way == EST)
            tmp_x = left_and_right(y, way);
        if ((info->maze[tmp_y] != NULL && info->maze[tmp_y][tmp_x].wall != END)
            && info->maze[tmp_y][tmp_x].state == NOT_VISITED)
            break;
    }
    x = tmp_x;
    y = tmp_y;
    // if (all_visited(info->maze) != TRUE)
    //     algo(info);
}