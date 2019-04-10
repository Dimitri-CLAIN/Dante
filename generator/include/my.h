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
#include "enum.h"
#include "struct.h"

void my_putchar(char);
int my_putstr(char *);
int my_putstr_error(char *);
int my_strlen(char *);
char **word_array(char *, char);
char *my_strdup(char *);
char *clean_str(char *);
int isnum(char *);
void free_array(char **);
char **word_array(char *, char);
int my_strcmp(char *, char *);
char *my_strcat(char *, char *);
int my_getnbr(char *);

int check_arg(char **);
char **init_maze(int, int);
void generate_maze(char **);

#endif