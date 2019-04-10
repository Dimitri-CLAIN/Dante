/*
** EPITECH PROJECT, 2019
** solver include
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

typedef struct s_room
{
    char ch;
    int state;
    int type;
} room_t;

typedef struct s_maze
{
    room_t **all_maze;
} maze_t;

#endif
