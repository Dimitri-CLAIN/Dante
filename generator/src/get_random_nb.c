/*
** EPITECH PROJECT, 2019
** get_random_nb
** File description:
** get random number
*/

#include "my.h"

int get_random_nb(int limit)
{
    int ret = rand() % limit;

    return (ret);
}

int choose_rand_neighbour(char **maze, pos_t pos)
{
    int r = get_random_nb(4);

    if (r == NORTH && is_visited(maze, pos.x - 2, pos.y) == FALSE)
        return (NORTH);
    if (r == SOUTH && is_visited(maze, pos.x + 2, pos.y) == FALSE)
        return (SOUTH);
    if (r == WEST && is_visited(maze, pos.x, pos.y - 2) == FALSE)
        return (WEST);
    if (r == EST && is_visited(maze, pos.x, pos.y + 2) == FALSE)
        return (EST);
    return (choose_rand_neighbour(maze, pos));
}

pos_t set_position(int x, int y)
{
    pos_t pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}

pos_t get_position(int way)
{
    switch (way) {
    case NORTH:
        return (set_position(-2, 0));
        break;
    case SOUTH:
        return (set_position(2, 0));
        break;
    case WEST:
        return (set_position(0, -2));
        break;
    case EST:
        return (set_position(0, 2));
        break;
    }
}

pos_t get_semi_position(int way)
{
    switch (way) {
    case NORTH:
        return (set_position(-1, 0));
        break;
    case SOUTH:
        return (set_position(1, 0));
        break;
    case WEST:
        return (set_position(0, -1));
        break;
    case EST:
        return (set_position(0, 1));
        break;
    }
}