/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "enum.h"
#include "struct.h"

int check_arg(char **);
char **init_maze(int, int);
char **generate_maze(char **);
stack_t *push_stack(stack_t *, int, int);
stack_t *pop_stack(stack_t *);
void clear_stack(stack_t *);
int choose_rand_neighbour(char **, pos_t);
int is_visited(char **, int, int);
int is_neighbours_visited(char **, pos_t);
int is_all_cells_visited(char **);
pos_t get_position(int);
pos_t get_semi_position(int);
void display_maze(char **);
char **make_it_imperfect(char **, int, int);

#endif