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
void print_my_maze(maze_t *maze);

int check_map(char **map);
int check_correct_end(char **map);

void manage_solver(maze_t *maze);
int my_algo(maze_t *maze, int x, int y);

void free_maze_ac(room_t **all_maze, room_t *maze);
void free_arr_clean(char **map, char *clean);

#endif