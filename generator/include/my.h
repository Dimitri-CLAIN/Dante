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
#include "struct.h"
#include "enum.h"

void init_struct_maze(char **, maze_t *);
int check_arg(char **);
void generate_maze(maze_t);
index_t create_a_cell(int, int);
index_t end_cell(void);

#endif