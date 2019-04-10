/*
** EPITECH PROJECT, 2019
** cells
** File description:
** manage cell
*/

#include "my.h"

index_t create_a_cell(int x, int y)
{
    index_t cell;

    cell.x = x;
    cell.y = y;
    cell.state = NOT_VISITED;
    cell.wall = WALL;
    return (cell);
}

index_t end_cell(void)
{
    index_t cell;

    cell.x = -1;
    cell.y = -1;
    cell.state = NOT_VISITED;
    cell.wall = END;
    return (cell);
}