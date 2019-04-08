/*
** EPITECH PROJECT, 2019
** struct
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct index_s {
    int x;
    int y;
    int state;
    int wall;
}index_t;

typedef struct maze_s {
    index_t **maze;
    int width;
    int height;
    int state;
}maze_t;

#endif