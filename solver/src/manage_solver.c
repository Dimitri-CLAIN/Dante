/*
** EPITECH PROJECT, 2019
** manage_solver
** File description:
** manage_solver
*/

#include "my.h"

void manage_solver(maze_t *maze)
{
    if (my_algo(maze, 0, 0) == END)
        printf("FIN\n");
}