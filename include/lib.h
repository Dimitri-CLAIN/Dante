/*
** EPITECH PROJECT, 2019
** lib.h
** File description:
** lib.h
*/

#ifndef LIB_H_
#define LIB_H_

void my_putchar(char);
int my_putstr(char *);
int my_putstr_error(char *);
char *my_strcat(char *, char *);
char *my_strdup(char *);
int my_strcmp(char *, char *);
int my_strlen(char *);
char **my_str_to_word_array(char *, char);
char *my_strcpy(char *);
int array_len(char **);
void free_array(char **);
int my_getnbr(char *);
char *clean_str(char *);
int isnum(char *);

#endif