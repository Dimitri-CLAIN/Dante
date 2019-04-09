/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../include/lib.h"
#include "enum_solver.h"
#include "solver.h"

char *read_my_file(char *file);
maze_t create_my_maze(char *file);
maze_t load_my_maze(char **map);

#endif